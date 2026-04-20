import numpy as np
from sklearn.linear_model import LinearRegression

# Simulated data: [Battery Voltage, Raw Sensor Reading]
X = np.array([[8.4, 100], [8.0, 105], [7.6, 110], [7.2, 115]])
# The real distance the object actually was (Ground Truth)
y = np.array([100, 100, 100, 100]) 

model = LinearRegression()
model.fit(X, y)

print("Model Trained!")
print(f"Voltage Weight: {model.coef_[0]}")
print(f"Sensor Weight: {model.coef_[1]}")
print(f"Bias: {model.intercept_}")
