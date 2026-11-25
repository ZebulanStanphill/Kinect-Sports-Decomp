typedef struct Value_82E7F520 {
    unsigned short type;
    char pad[6];
    unsigned short *text;
} Value_82E7F520;

extern unsigned short *fn_82E4FE08(unsigned int);
extern int fn_82F64CE0(const unsigned short *);
extern unsigned short *fn_82EE0060(const unsigned short *);
extern int fn_82A2A288(unsigned int, unsigned int, const char *, int, unsigned short *, int);
extern int fn_82A1F470(void);
extern int fn_82A3F758(unsigned short *, unsigned int, unsigned short *);
extern unsigned int strlen(const char *);

int fn_82E7F520(Value_82E7F520 *self, unsigned short type, const void *text)
{
    unsigned int bytes;
    int result = 0;
    self->type = type;

    if (type == 0x1e) {
        bytes = (strlen((const char *)text) + 1) * sizeof(unsigned short);
        self->text = fn_82E4FE08(bytes);
        if (self->text == 0) {
            result = 0x8007000e;
            goto done;
        }
        self->text[0] = 0;
    } else if (type == 0x1f || type == 8) {
        bytes = (fn_82F64CE0((const unsigned short *)text) + 1) * sizeof(unsigned short);
    } else {
        result = 0x80070057;
        goto done;
    }

    if (type == 0x1e || type == 0x1f) {
        self->text = fn_82E4FE08(bytes);
        if (self->text == 0) {
            result = 0x8007000e;
            goto done;
        }
        self->text[0] = 0;
    }
    if (type == 0x1e) {
        self->type = 0x1f;
        if (fn_82A2A288(0, 0, (const char *)text, -1, self->text, bytes / sizeof(unsigned short)) == 0) {
            int error = fn_82A1F470();
            if (error <= 0) {
                result = error;
            } else {
                result = (error & 0xffff) | 0x80070000;
            }
            if (result >= 0) {
                result = 0x8000ffff;
            }
        }
    } else if (type == 0x1f) {
        unsigned short *dst = self->text;
        unsigned int count = bytes / sizeof(unsigned short);
        int status;
        if (count > 0x7fffffff) {
            status = 0x80070057;
        } else {
            status = fn_82A3F758(dst, count, (unsigned short *)text);
        }
        result = status;
        goto done;
    } else {
        self->text = fn_82EE0060((const unsigned short *)text);
        if (self->text == 0) {
            int error = fn_82A1F470();
            if (error <= 0) {
                result = error;
            } else {
                result = (error & 0xffff) | 0x80070000;
            }
        }
    }

done:
    return result;
}
