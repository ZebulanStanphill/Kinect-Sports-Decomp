unsigned char fn_82A0DA60(float value, float threshold)
{
    float scaled = value * 8.0f / 1.5f;
    int inRange = scaled + 0.5f > 1.0f && scaled - 0.5f < 2.0f;
    int exceeds = threshold > scaled / 5.0f;
    return !(exceeds & inRange);
}
