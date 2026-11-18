extern float fn_830177C8(void *system, void *object, int property, unsigned int key);
extern void *lbl_832642FC;

typedef struct Entry_83001E10 {
    unsigned int key;
    char *value;
} Entry_83001E10;

typedef struct Map_83001E10 {
    Entry_83001E10 *begin;
    Entry_83001E10 *end;
} Map_83001E10;

static __forceinline char **Find(Map_83001E10 *map, unsigned int key)
{
    Entry_83001E10 *end = map->end;
    Entry_83001E10 *entry;

    for (entry = map->begin; entry != end; ++entry) {
        if (entry->key == key) {
            break;
        }
    }
    {
        unsigned char found = entry != end;
        return found ? &entry->value : 0;
    }
}

unsigned char fn_83001E10(char *self, unsigned int key)
{
    unsigned char result;
    int proxy;
    char *data;
    Map_83001E10 *map;
    char **value;

    if ((*(unsigned char *)(self + 0x3e) & 0x80) == 0) {
        proxy = *(int *)(self + 0x10);
        if (proxy != 0) {
            return (*(unsigned char (**)(int, unsigned int))(*(int *)proxy + 0xec))(proxy, key);
        }
    }
    data = *(char **)(self + 0x28);
    if (data == 0) {
        return 0;
    }
    result = ((unsigned char)data[0x3c] >> 4) & 1;
    if ((unsigned char)((*(unsigned int *)(self + 0x40) >> 28) & 1) != 0) {
        return fn_830177C8(lbl_832642FC, self, 0x1c, key) != 0.0f;
    }
    map = *(Map_83001E10 **)(self + 0x54);
    if (map != 0) {
        value = Find(map, key);
        if (value != 0) {
            return ((unsigned char)(*value)[0x3d] >> 4) & 1;
        }
    }
    data = *(char **)(self + 0x24);
    if (data != 0) {
        result = ((unsigned char)data[0x3d] >> 4) & 1;
    }
    return result;
}
