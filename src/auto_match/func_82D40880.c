float fn_82D40880(void)
{
    float x = 0.0f;
    do {
        if ((int)x != 0) {
            return x;
        }
        x += 0.01f;
    } while (x < 1.1f);
    return 1.0f;
}
