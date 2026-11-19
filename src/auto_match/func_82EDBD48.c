/* Checks that a surface's width and height suit its format's chroma subsampling; returns 1 when they do
   not. The FOURCCs written as unsigned literals come from MAKEFOURCC (compared unsigned), the others are
   format enum values (compared signed). */
int fn_82EDBD48(int format, int width, int height, int planar)
{
    if (planar == 0) {
        if (format == 0 || format == 3 || format == 0x41595556u) {
            return 0;
        }
        if (format == 0x32595559 || format == 0x59565955 || format == 0x50343232u || format == 0x56323136u) {
            return width & 1;
        }
        if (format == 0x56555949 || format == 0x32315659 || format == 0x30323449) {
            if ((width & 1) != 0 || (height & 1) != 0) {
                return 1;
            }
            return 0;
        }
        if (format == 0x39555659) {
            if (width % 4 != 0 || height % 4 != 0) {
                return 1;
            }
        }
    } else {
        if (format == 0 || format == 3 || format == 0x41595556u) {
            return height & 1;
        }
        if (format == 0x32595559 || format == 0x59565955 || format == 0x56323136u) {
            return (width & 1) != 0 || (height & 1) != 0;
        }
        if (format == 0x56555949 || format == 0x30323449 || format == 0x32315659) {
            return (width & 1) != 0 || (height & 3) != 0;
        }
        if (format == 0x39555659) {
            return (width & 3) != 0 || (height & 7) != 0;
        }
    }
    return 0;
}
