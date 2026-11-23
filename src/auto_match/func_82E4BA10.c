typedef struct Decoder_82E4BA10 {
    char pad0[0x1f0];
    int useRequestedSize; /* 0x1f0 */
    char pad1f4[8];
    int reduced; /* 0x1fc */
    char pad200[4];
    unsigned int width;  /* 0x204 */
    unsigned int height; /* 0x208 */
} Decoder_82E4BA10;

extern int fn_82E4B8A8(Decoder_82E4BA10 *self, unsigned int *width, unsigned int *height, int mode,
                       const void *format);
extern const double lbl_820A6C58;

void fn_82E4BA10(Decoder_82E4BA10 *self, int mode, int profile, unsigned int *width, unsigned int *height,
                 double rate, unsigned int samples, const void *format)
{
    unsigned int *storedHeight = &self->height;

    self->height = 0;
    self->width = 0;
    if (mode == 8 || mode == 7) {
        if (fn_82E4B8A8(self, &self->width, &self->height, mode, format)) {
            unsigned int actualWidth = self->width;
            unsigned int requestedWidth = *width;
            unsigned int actualHeight;
            unsigned int requestedHeight;
            if (actualWidth < requestedWidth) {
                self->reduced = 1;
                *width = actualWidth;
            } else {
                self->width = requestedWidth;
            }
            actualHeight = *storedHeight;
            requestedHeight = *height;
            if (actualHeight < requestedHeight) {
                self->reduced = 1;
                *height = actualHeight;
            } else {
                *storedHeight = requestedHeight;
            }
        } else if (mode == 7 && profile != 2) {
            if ((double)samples * rate / (*width * *height) < lbl_820A6C58) {
                self->useRequestedSize = 1;
                self->width = *width;
                *storedHeight = *height;
            }
        }
    }
}
