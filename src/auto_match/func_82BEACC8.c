/* Hands every pending subscriber to the MAO of the same name: a dynamic MAO created from the
 * first list, or an existing MAO of the second list. Matched subscribers leave the pending list.
 * (A node without a subscriber is never stepped over: the original loops on it.) */
typedef struct Mao_82BEACC8 Mao_82BEACC8;

typedef struct Subscriber_82BEACC8 {
    int f0;
    const char *name; /* 0x4 */
} Subscriber_82BEACC8;

typedef struct MaoVtbl_82BEACC8 {
    void (*destroy)(Mao_82BEACC8 *self, int flags); /* 0x0 */
    void *slots[5];
    unsigned int (*addSubscriber)(Mao_82BEACC8 *self, Subscriber_82BEACC8 *subscriber); /* 0x18 */
} MaoVtbl_82BEACC8;

struct Mao_82BEACC8 {
    MaoVtbl_82BEACC8 *vt; /* 0x0 */
    char pad4[0x14 - 0x4];
    const char *name; /* 0x14 */
};

typedef struct Node_82BEACC8 {
    struct Node_82BEACC8 *next; /* 0x0 */
    int f4;
    void *data; /* 0x8 */
} Node_82BEACC8;

typedef struct List_82BEACC8 {
    char pad0[0xc];
} List_82BEACC8;

typedef struct Zone_82BEACC8 {
    char pad0[0x10];
    int ok; /* 0x10 */
    char pad14[0x28 - 0x14];
    List_82BEACC8 pending; /* 0x28 */
    char pad34[0x38 - 0x34];
    const char *name;         /* 0x38 */
    List_82BEACC8 *templates; /* 0x3c */
    List_82BEACC8 *maos;      /* 0x40 */
} Zone_82BEACC8;

extern Node_82BEACC8 *fn_82BE5340(List_82BEACC8 *list);
extern void fn_82BE5398(List_82BEACC8 *list, Node_82BEACC8 *node, int free);
extern int fn_82BE5240(Zone_82BEACC8 *zone, int code, const char *format, ...);
extern int fn_82BEAC00(Zone_82BEACC8 *zone, Mao_82BEACC8 *mao);
extern Mao_82BEACC8 *fn_82BF4B98(Mao_82BEACC8 *source, Zone_82BEACC8 *zone);
extern int stricmp(const char *a, const char *b);

int fn_82BEACC8(Zone_82BEACC8 *zone)
{
    Node_82BEACC8 *node;
    Node_82BEACC8 *matched;
    Node_82BEACC8 *entry;
    Subscriber_82BEACC8 *subscriber;
    Mao_82BEACC8 *mao;
    int found;

    if (zone->templates == 0 || zone->maos == 0) {
        zone->ok = 0;
        return fn_82BE5240(zone, 0x133, "One or more of the lists is NULL");
    }
    node = fn_82BE5340(&zone->pending);
    while (node != 0) {
        subscriber = (Subscriber_82BEACC8 *)node->data;
        found = 0;
        if (subscriber != 0) {
            for (entry = fn_82BE5340(zone->templates); entry != 0; entry = entry->next) {
                mao = (Mao_82BEACC8 *)entry->data;
                if (mao != 0 && stricmp(mao->name, subscriber->name) == 0) {
                    found = 1;
                    mao = fn_82BF4B98(mao, zone);
                    if (mao != 0) {
                        if (mao->vt->addSubscriber(mao, subscriber) == 0) {
                            if (fn_82BEAC00(zone, mao) == 0) {
                                mao->vt->destroy(mao, 1);
                                zone->ok = 0;
                                return fn_82BE5240(zone, 0x133,
                                                   "Could not add dynamic MAO \"%s\" to zone \"%s\"",
                                                   subscriber->name, zone->name);
                            }
                        } else {
                            mao->vt->destroy(mao, 1);
                            zone->ok = 0;
                            return fn_82BE5240(
                                zone, 0x133, "Could not add subscriber \"%s\" to dynamic MAO in zone \"%s\"",
                                subscriber->name, zone->name);
                        }
                    } else {
                        zone->ok = 0;
                        return fn_82BE5240(
                            zone, 0x133,
                            "Could not create a dynamic MAO for subscriber \"%s\" in zone \"%s\"",
                            subscriber->name, zone->name);
                    }
                }
            }
            if (!found) {
                for (entry = fn_82BE5340(zone->maos); entry != 0; entry = entry->next) {
                    mao = (Mao_82BEACC8 *)entry->data;
                    if (mao != 0 && stricmp(mao->name, subscriber->name) == 0) {
                        found = 1;
                        if (mao->vt->addSubscriber(mao, subscriber) != 0) {
                            zone->ok = 0;
                            return fn_82BE5240(zone, 0x133,
                                               "Could not add subscriber \"%s\" to MAO in zone \"%s\"",
                                               subscriber->name, zone->name);
                        }
                    }
                }
            }
            if (found) {
                matched = node;
                node = node->next;
                fn_82BE5398(&zone->pending, matched, 1);
            } else {
                node = node->next;
            }
        }
    }
    return 0;
}
