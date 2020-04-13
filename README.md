# lightAHRS

## What is AHRS
 
An attitude and heading reference system (AHRS) consists of sensors on three axes that provide attitude information for aircraft, 
including roll, pitch and yaw. These are sometimes referred to as MARG (Magnetic, Angular Rate, and Gravity). sensors and consist of  
either solid-state or microelectromechanical systems (MEMS) gyroscopes, accelerometers and magnetometers. They are designed to replace  
traditional mechanical gyroscopic flight instruments.

The key difference between an inertial measurement unit (IMU) and an AHRS is the addition of an on-board processing system in an AHRS,
which provides attitude and heading information. This is in contrast to an IMU, which just delivers sensor data to an additional device
that computes attitude and heading. With sensor fusion, drift from the gyroscopes integration is compensated for by reference vectors,
namely gravity, and the earth magnetic field. This results in a drift-free orientation, making an AHRS a more cost effective solution
than conventional high-grade IMUs (Inertial Measurement Units) that only integrate gyroscopes and rely on a very high bias stability of
the gyroscopes. In addition to attitude determination an AHRS may also form part of an inertial navigation system.

A form of non-linear estimation such as an Extended Kalman filter is typically used to compute the solution from these multiple sources.

AHRS have proven themselves to be highly reliable and are in common use in commercial and business aircraft. AHRS are typically integrated
with electronic flight instrument systems (EFIS) which are the central part of so-called glass cockpits, to form the primary flight
display. AHRS can be combined with air data computers to form an "air data, attitude and heading reference system" (ADAHRS), which provide
additional information such as airspeed, altitude and outside air temperature.


## Harware
laghtAHRS is currently being developed on STM32f103cbt6 MCU, MPU6050 gyroscope + accelerometer and HMC5883L magnetometer. One of my main obfectives is to keep this project versatile and easily configurable.
