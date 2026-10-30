extern void fn_82FF11B8(void *o, float *v);

float fn_82FF1378(char *o)
{
    if ((*(unsigned char *)(o + 0xd8) & 1) == 0) {
        float v[4];
        v[1] = 0.0f;
        v[0] = 0.0f;
        v[2] = 0.0f;
        v[3] = 0.0f;
        fn_82FF11B8(o, v);
    }
    return *(float *)(o + 0x78);
}
