/* Havok: dispatches on the object's type byte to the handler for that type, passing the object's
   data (0x1c) and the context; unknown types succeed (1). */
typedef struct Object_82DA7910 {
    unsigned char type; /* 0x00 */
    char pad1[0x1b];
    void *data; /* 0x1c */
} Object_82DA7910;

extern int fn_82DC3748(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC39A0(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC4358(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC4C80(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC4D68(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC4E70(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC4F30(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC5050(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC5128(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC51F0(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC54F8(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC5700(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC5928(void *data, void *context, Object_82DA7910 *object);
extern int fn_82DC6B00(void *data, void *context, Object_82DA7910 *object);

int fn_82DA7910(void *context, Object_82DA7910 *object)
{
    switch (object->type) {
    case 0:
        return fn_82DC6B00(object->data, context, object);
    case 1:
        return fn_82DC5928(object->data, context, object);
    case 3:
        return fn_82DC5700(object->data, context, object);
    case 4:
        return fn_82DC54F8(object->data, context, object);
    case 6:
        return fn_82DC51F0(object->data, context, object);
    case 7:
        return fn_82DC4E70(object->data, context, object);
    case 8:
        return fn_82DC4F30(object->data, context, object);
    case 9:
        return fn_82DC5050(object->data, context, object);
    case 10:
        return fn_82DC5128(object->data, context, object);
    case 11:
        return fn_82DC4D68(object->data, context, object);
    case 5:
        return fn_82DC4C80(object->data, context, object);
    case 12:
        return fn_82DC4358(object->data, context, object);
    case 13:
    case 15:
        return fn_82DC39A0(object->data, context, object);
    case 14:
        return fn_82DC3748(object->data, context, object);
    }
    return 1;
}
