/* Degrees to radians after subtracting the whole-turn count (x / 360 truncated) from the angle. */
float fn_8301E178(float degrees)
{
    return (degrees - (float)(int)(degrees * 0.0027777778f)) * 0.017453292f;
}
