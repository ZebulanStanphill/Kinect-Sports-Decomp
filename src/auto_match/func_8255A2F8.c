#include "xdk/vectorintrinsics.h"

extern double sqrt(double value);
extern double fabs(double value);
extern float fn_828095F8(float value);
extern const float lbl_821954B0[0x28a];

float fn_8255A2F8(__vector4 first, __vector4 second)
{
    float firstX = first.vector4_f32[0];
    float firstY = first.vector4_f32[1];
    float firstZ = first.vector4_f32[2];
    float secondX = second.vector4_f32[0];
    float secondY = second.vector4_f32[1];
    float secondZ = second.vector4_f32[2];
    float dot = secondX * firstX + secondZ * firstZ + secondY * firstY;
    float magnitude = sqrt(secondX * secondX + secondZ * secondZ + secondY * secondY) *
                      sqrt(firstX * firstX + firstZ * firstZ + firstY * firstY);
    if (magnitude < lbl_821954B0[0x5e]) {
        return 0.0f;
    }
    {
        float absoluteDot = fabs(dot);
        if (magnitude < absoluteDot) {
            magnitude = absoluteDot;
        }
        return fn_828095F8(dot / magnitude);
    }
}
