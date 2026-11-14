/* Radians to degrees after subtracting the whole-turn count (x / 2pi truncated) from the angle. */
float fn_8301E1B8(float radians)
{
    return (radians - (float)(int)(radians * 0.15915494f)) * 57.29578f;
}
