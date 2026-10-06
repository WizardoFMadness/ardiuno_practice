# led_fading

hello, once again 

today we are making how-to-fade your led

refer to :https://youtu.be/QCZISwDi_Qo?si=DToi-QoVZ5hVLPM0 for visual tutorial

but if you are lazy just like  me this is how it works


1. you need pulse-width-modulation,so whats pwm? so pwm or  pulse-width-modulation  does in simple terms, make you led work notin 0, or 1 but in series of waves slowly going high and low
2. 
3. you ask how itt does? it does by making your led flick so fast that your preciive not the high or low  but the  avg of the led glow, (cuz its avg duh)

4. so now you do is instead of your regular digitalPin you use PWM pin to give output,

5. and just rest is simple led code, imp- choose analogWrite instead of digital just because your led is taking signals in 0to 255 value not in 1s or 0s

6. why 255? in simple terms that's the highest bit for 8-bit binary...why not 256? we count the numbers from 0 so if you start from 0..last value is always 255

7. so  yeah thats it

thank you!!
