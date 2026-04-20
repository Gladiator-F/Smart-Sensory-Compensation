# Smart Sensory Compensation for Robotics

## The Problem
In competitive robotics, as the LiPo battery voltage drops, the sensors (Ultrasonic/Gyro) begin to report inaccurate data. This leads to failures in autonomous tasks.

## The Solution
I developed a **TinyML** solution using Linear Regression. 
1. **Data:** Collected sensor readings at different voltage levels.
2. **Training:** Used Python (Scikit-Learn) to find a compensation formula.
3. **Edge Deployment:** Ported the math directly into the Arduino firmware.

## Results
- Successfully stabilized sensor readings across 8.4V - 7.2V range.
- Reduced "Low Battery" sensor error by approximately 12%.
