/* Mip level count of a width x height surface, less the four smallest levels; a packed (bordered)
   surface reserves one texel on each side. */
int fn_82A94AA8(unsigned int width, unsigned int height, int packed)
{
    /* the original tests packed through cntlzw/srwi, not the extrwi that (packed == 0) gives */
    int border = (_CountLeadingZeros(packed) >> 5) ^ 1;
    int widthLevels;
    int heightLevels;
    int levels;

    widthLevels = border + 32 - _CountLeadingZeros(width - 2 * border - 1);
    heightLevels = border + 32 - _CountLeadingZeros(height - 2 * border - 1);
    levels = widthLevels < heightLevels ? widthLevels : heightLevels;
    levels -= 4;
    return levels > 0 ? levels : 0;
}
