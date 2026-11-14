typedef struct Stream_82E6EFF0 Stream_82E6EFF0;
typedef struct StreamVt_82E6EFF0 {
    void *slots[5];
    int (*GetLength)(Stream_82E6EFF0 *self, unsigned __int64 *length, int flags);
    void *slot18;
    int (*Read)(Stream_82E6EFF0 *self, void *buf, unsigned int size, unsigned int *done);
} StreamVt_82E6EFF0;
struct Stream_82E6EFF0 {
    StreamVt_82E6EFF0 *vt;
};

typedef struct Target_82E6EFF0 Target_82E6EFF0;
typedef struct TargetVt_82E6EFF0 {
    void *slots[7];
    int (*SetPosition)(Target_82E6EFF0 *self, unsigned __int64 position);
    void *slots20[4];
    int (*Write)(Target_82E6EFF0 *self, void *buf, unsigned int size, unsigned int *done);
} TargetVt_82E6EFF0;
struct Target_82E6EFF0 {
    TargetVt_82E6EFF0 *vt;
};

typedef struct Obj_82E6EFF0 {
    char pad[0x2c];
    Target_82E6EFF0 *target;
    unsigned __int64 position;
} Obj_82E6EFF0;

extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern void fn_82E4FE40(void *p);

int fn_82E6EFF0(Obj_82E6EFF0 *self, Stream_82E6EFF0 *source)
{
    int hr;
    unsigned __int64 length;
    unsigned int size;
    unsigned int done;
    void *buf;

    if (source == 0) {
        return 0x80004003;
    }
    length = 0;
    hr = source->vt->GetLength(source, &length, 0);
    if (hr >= 0) {
        if (length > 0xffffffff) {
            hr = 0xc00d36bb;
        } else {
            size = (unsigned int)length;
            buf = fn_82E50BE8(size, 0, 0, 0, 0);
            if (buf == 0) {
                hr = 0x8007000e;
            } else {
                done = 0;
                hr = source->vt->Read(source, buf, size, &done);
                if (hr >= 0) {
                    if (size != done) {
                        hr = 0xc00d36bb;
                    } else {
                        hr = self->target->vt->SetPosition(self->target, self->position);
                        if (hr >= 0) {
                            hr = self->target->vt->Write(self->target, buf, size, &done);
                            if (hr >= 0 && size != done) {
                                hr = 0xc00d36bb;
                            }
                        }
                    }
                }
                fn_82E4FE40(buf);
            }
        }
    }
    return hr;
}
