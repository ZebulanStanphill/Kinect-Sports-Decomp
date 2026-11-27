struct Key_82E3E5A8 {
    unsigned int id;      /* 0x0 */
    unsigned int data[3]; /* 0x4 */
    unsigned short tag;   /* 0x10 */
    unsigned short pad12;
};

struct Node_82E3E5A8 {
    Key_82E3E5A8 key;    /* 0x0 */
    int value;           /* 0x14 */
    Node_82E3E5A8 *next; /* 0x18 */
};

struct Position_82E3F048 {
    Node_82E3E5A8 *found;
    Node_82E3E5A8 *previous;
};

class HashTable_82E3E5A8
{
  public:
    long Insert(const Key_82E3E5A8 *key, const int *value);

  private:
    Node_82E3E5A8 **buckets; /* 0x0 */
    unsigned int bucketBits; /* 0x4 */
    int count;               /* 0x8 */
    int padc;
    char pool[0x10]; /* 0x10 */
};

struct Guid_82E3F048 {
    unsigned int data[4];
};

struct StreamKey_82E3F048 {
    Guid_82E3F048 type;   /* 0x0 */
    unsigned short index; /* 0x10 */
};

struct Stream_82E3F048;

struct StreamVtbl_82E3F048 {
    void (*Destroy)(Stream_82E3F048 *self, int flags);
};

struct Stream_82E3F048 {
    StreamVtbl_82E3F048 *vt;
};

struct Source_82E3F048;

struct SourceVtbl_82E3F048 {
    void *slots00[0x30 / 4];
    long (*GetCount)(Source_82E3F048 *self, unsigned short *count); /* 0x30 */
    long (*GetId)(Source_82E3F048 *self, unsigned short index, unsigned short *id,
                  unsigned int *size); /* 0x34 */
};

struct Source_82E3F048 {
    SourceVtbl_82E3F048 *vt;
};

struct Owner_82E3F048 {
    char pad00[0x44];
    unsigned int options; /* 0x44 */
    char pad48[0x1c];
    int context;        /* 0x64 */
    unsigned int flags; /* 0x68 */
    char pad6c[0x140];
    HashTable_82E3E5A8 streams; /* 0x1ac */
};

extern "C" {
extern const Guid_82E3F048 lbl_8214C020;
int fn_82E3BF28(HashTable_82E3E5A8 *table, StreamKey_82E3F048 *key, int *value, Position_82E3F048 *position);
void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
Stream_82E3F048 *fn_82E700E0(void *self, Source_82E3F048 *source, unsigned short id, void *a, void *b,
                             int context, int option);
long fn_82E3F048(Owner_82E3F048 *self, Source_82E3F048 *source, void *a, void *b);
}

long fn_82E3F048(Owner_82E3F048 *self, Source_82E3F048 *source, void *a, void *b)
{
    long hr;
    unsigned short count;
    unsigned short id;
    int value;
    unsigned int size;
    Position_82E3F048 position;
    StreamKey_82E3F048 key;
    Stream_82E3F048 *stream;
    unsigned short i;
    void *memory;
    HashTable_82E3E5A8 *streams;

    if (source == 0 || a == 0) {
        return 0x80004003;
    }
    count = 0;
    stream = 0;
    hr = source->vt->GetCount(source, &count);
    if (hr < 0) {
        goto done;
    }
    for (i = 0; i < count; i++) {
        id = 0;
        size = 4;
        hr = source->vt->GetId(source, i, &id, &size);
        if (hr < 0) {
            goto done;
        }
        key.type = lbl_8214C020;
        key.index = id;
        streams = &self->streams;
        if (!fn_82E3BF28(streams, &key, &value, &position)) {
            memory = fn_82E50BE8(0x88, 0, 0, 0, 0);
            if (memory != 0) {
                stream = fn_82E700E0(memory, source, id, a, b, self->context, self->options & 4);
            } else {
                stream = 0;
            }
            value = (int)stream;
            if (stream != 0) {
                hr = streams->Insert((const Key_82E3E5A8 *)&key, &value);
                if (hr < 0) {
                    goto cleanup;
                }
                stream = 0;
            } else {
                hr = 0x8007000E;
                break;
            }
        }
    }
    if (hr >= 0) {
        self->flags |= 4;
    cleanup:
        if (stream != 0) {
            stream->vt->Destroy(stream, 1);
        }
    }
done:
    return hr;
}
