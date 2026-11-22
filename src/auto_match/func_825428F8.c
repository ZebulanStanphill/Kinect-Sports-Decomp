/* Builds a white colour (0xAARRGGBB) whose alpha is opacity, limited to 1.0. */
unsigned int fn_825428F8(float opacity)
{
    float alpha = opacity - 1.0f >= 0.0f ? 1.0f : opacity;

    return ((unsigned char)(alpha * 255.0f) << 24) | 0xffffff;
}
