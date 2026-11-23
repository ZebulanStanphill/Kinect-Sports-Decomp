typedef struct ChunkHeader_82FFA358 {
    unsigned int tag;   /* 0x0 */
    unsigned int count; /* 0x4 */
} ChunkHeader_82FFA358;

typedef struct Loader_82FFA358 {
    char padding0[0x4];
    char stream[0x418]; /* 0x4 */
    char names[0x10];   /* 0x41c: map from id to bank file name */
} Loader_82FFA358;

extern void *lbl_831BC768;

extern int fn_82FF8938(void *stream, void *buffer, unsigned int size);
extern void fn_82FF8988(void *stream, unsigned int size, unsigned int *skipped);
extern void *fn_82FFE0F0(void *names, unsigned int id);
extern char **fn_82FFE158(void *names, unsigned int id);
extern char *fn_82FA5060(void *heap, unsigned int size);
extern void fn_82FA5190(void *heap, void *block);

/* Reads chunks of (id, name) pairs and records each new name with ".bnk" appended. */
int fn_82FFA358(Loader_82FFA358 *self, unsigned int remaining)
{
    int result = 1;
    while (remaining != 0 && result == 1) {
        ChunkHeader_82FFA358 header;
        unsigned int i;
        result = fn_82FF8938(self->stream, &header, sizeof(header));
        if (result != 1) {
            break;
        }
        remaining -= 8;
        for (i = 0; i < header.count; i++) {
            unsigned int id;
            unsigned char length;
            result = fn_82FF8938(self->stream, &id, sizeof(id));
            if (result != 1) {
                break;
            }
            remaining -= 4;
            result = fn_82FF8938(self->stream, &length, sizeof(length));
            if (result != 1) {
                break;
            }
            remaining -= 1;
            if (fn_82FFE0F0(self->names, id) != 0) {
                unsigned int skipped;
                fn_82FF8988(self->stream, length, &skipped);
                remaining -= length;
            } else {
                char *name = fn_82FA5060(lbl_831BC768, length + 5);
                if (name != 0) {
                    char **slot;
                    name[length] = '.';
                    name[length + 1] = 'b';
                    name[length + 2] = 'n';
                    name[length + 3] = 'k';
                    name[length + 4] = 0;
                    result = fn_82FF8938(self->stream, name, length);
                    if (result == 1) {
                        remaining -= length;
                        slot = fn_82FFE158(self->names, id);
                        if (slot != 0) {
                            *slot = name;
                            continue;
                        }
                        result = 0x34;
                    }
                    fn_82FA5190(lbl_831BC768, name);
                } else {
                    result = 0x34;
                }
                break;
            }
        }
    }
    return result;
}
