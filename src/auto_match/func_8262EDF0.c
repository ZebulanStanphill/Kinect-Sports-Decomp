unsigned int fn_8262EDF0(const float *color)
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;

    red = (unsigned char)color[1];
    green = (unsigned char)color[2];
    blue = (unsigned char)color[3];
    alpha = (unsigned char)color[0];
    return (((alpha << 8 | red) << 8) | green) << 8 | blue;
}
