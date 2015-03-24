/*
 RGB led animation for Arduino
 
 
 Copyright (c) 2012 Amico Leonardo - leonardo.amico@gmail.com
 
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 
 */



#ifndef Color_h
#define Color_h



#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#define H2R_MAX_RGB_val 255.0


class Color
{
    
public:
	Color();
    Color(unsigned char _r, unsigned char _g, unsigned char _b);
    Color(unsigned char _grey);
    
    static Color fromHex(unsigned long _hexCol);
    static Color fromHSB(int _h, int _s, int _b);
    
    void setHSB(int _h, int _s, int _b); //hue: 0 - 359; saturation: 0 - 99; brightness: 0 - 99
    void setHex(unsigned long _hexCol);
    
    unsigned char r;
    unsigned char g;
    unsigned char b;
    
    static const Color white, red, green, blue, cyan, magenta, yellow,
    white2700, white3000, white3500, white4100, white5000, white5500, white6500, white9300;
    
    
    
    
};



#endif


