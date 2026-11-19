#include <string.h>

typedef struct Rect_829E5FB8 {
    int left;   /* 0x00 */
    int top;    /* 0x04 */
    int right;  /* 0x08 */
    int bottom; /* 0x0c */
} Rect_829E5FB8;

typedef struct Image_829E5FB8 {
    int pad0;
    int previousState;      /* 0x04 */
    int state;              /* 0x08 */
    Rect_829E5FB8 current;  /* 0x0c */
    Rect_829E5FB8 previous; /* 0x1c */
    int finished;           /* 0x2c */
    unsigned int width;     /* 0x30 */
    unsigned int height;    /* 0x34 */
} Image_829E5FB8;

typedef struct Source_829E5FB8 Source_829E5FB8;

typedef struct SourceVtbl_829E5FB8 {
    int (*IsFinished)(Source_829E5FB8 *self, int *finished);
    int (*GetRect)(Source_829E5FB8 *self, int *left, int *top, int *right, int *bottom);
} SourceVtbl_829E5FB8;

struct Source_829E5FB8 {
    SourceVtbl_829E5FB8 *vt;
};

extern int fn_829E5CA0(Image_829E5FB8 *self, Rect_829E5FB8 rect);

static __forceinline void CopyRect(Rect_829E5FB8 *destination, const Rect_829E5FB8 *source)
{
    memcpy(destination, source, sizeof(*destination));
}

int fn_829E5FB8(Image_829E5FB8 *self, Source_829E5FB8 *source)
{
    int state;
    int newState;
    int finished;
    int done;
    int hr;
    Rect_829E5FB8 rect;

    state = self->state;
    if (state == 1) {
        CopyRect(&self->previous, &self->current);
    }
    hr = source->vt->IsFinished(source, &finished);
    if (hr < 0) {
        return hr;
    }
    newState = 2;
    if (finished == 0) {
        hr = source->vt->GetRect(source, &rect.left, &rect.top, &rect.right, &rect.bottom);
        if (hr < 0) {
            return hr;
        }
        done = finished;
        if (fn_829E5CA0(self, rect) < 0) {
            done = 1;
        }
        finished = done;
        if (done == 0) {
            newState = 1;
            CopyRect(&self->current, &rect);
        }
    }
    self->previousState = state;
    self->state = newState;
    self->finished = finished;
    return 0;
}
