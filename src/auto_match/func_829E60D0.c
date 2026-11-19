typedef struct Image_829E60D0 {
    int pad0;
    int previousState;  /* 0x04 */
    int state;          /* 0x08 */
    char pad0c[0x2c];   /* 0x0c */
    int previousFrame;  /* 0x38 */
    int frame;          /* 0x3c */
    float previousTime; /* 0x40 */
    float time;         /* 0x44 */
} Image_829E60D0;

typedef struct Source_829E60D0 Source_829E60D0;

extern int fn_829E5FB8(Image_829E60D0 *self, Source_829E60D0 *source);
extern int fn_829E5E50(Image_829E60D0 *self, unsigned int width, int height, float scaleX, float scaleY,
                       float *time, int *data, int *frame);
extern int fn_829E5D38(Image_829E60D0 *self, int *frame, int *data);

int fn_829E60D0(Image_829E60D0 *self, void *context, unsigned int width, int height, Source_829E60D0 *source,
                float scaleX, float scaleY, int *outFrame, int *outData, float *outTime)
{
    int hr;
    int frame;
    float time;
    int data;

    if (context == 0) {
        return 0x80070057;
    }
    if (width == 0) {
        return 0x80070057;
    }
    if (source == 0) {
        return 0x80070057;
    }
    if (outFrame == 0) {
        return 0x80070057;
    }
    if (outData == 0) {
        return 0x80070057;
    }
    if (outTime == 0) {
        return 0x80070057;
    }
    self->previousFrame = self->frame;
    self->previousTime = self->time;
    hr = fn_829E5FB8(self, source);
    hr = hr < 0 ? hr : 0;
    if (hr < 0) {
        return hr;
    }
    time = 0.0f;
    if (self->state == 1) {
        hr = fn_829E5E50(self, width, height, scaleX, scaleY, &time, &data, &frame);
        if (hr < 0) {
            return hr;
        }
    } else {
        hr = fn_829E5D38(self, &frame, &data);
        if (hr < 0) {
            return hr;
        }
    }
    self->frame = frame;
    *outFrame = frame;
    *outData = data;
    *outTime = time;
    return 0;
}
