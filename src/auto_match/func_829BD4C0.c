/* Corresponds to libjpeg 6b jdphuff.c process_restart (open-source IJG libjpeg), in D3DX's copy;
   a second libjpeg copy with int boolean and a different cinfo layout. */
typedef int boolean;

typedef struct Cinfo_829BD4C0 Cinfo_829BD4C0;

typedef struct Marker_829BD4C0 {
    int pad0[2];
    boolean (*read_restart_marker)(Cinfo_829BD4C0 *cinfo); /* 0x08 */
    int pad1[3];
    unsigned int discarded_bytes;                      /* 0x18 */
} Marker_829BD4C0;

typedef struct Saved_829BD4C0 {
    unsigned int EOBRUN;                               /* 0x14 */
    int last_dc_val[4];                                /* 0x18 */
} Saved_829BD4C0;

typedef struct Entropy_829BD4C0 {
    int pad0[2];
    boolean insufficient_data;                         /* 0x08 */
    int pad2;                                          /* 0x0c */
    int bits_left;                                     /* 0x10 */
    Saved_829BD4C0 saved;                              /* 0x14 */
    unsigned int restarts_to_go;                       /* 0x28 */
} Entropy_829BD4C0;

struct Cinfo_829BD4C0 {
    char pad0[0x118];
    unsigned int restart_interval;                     /* 0x118 */
    char pad1[0x14c - 0x11c];
    int comps_in_scan;                                 /* 0x14c */
    char pad2[0x1a4 - 0x150];
    int unread_marker;                                 /* 0x1a4 */
    char pad3[0x1bc - 0x1a8];
    Marker_829BD4C0 *marker;                           /* 0x1bc */
    Entropy_829BD4C0 *entropy;                         /* 0x1c0 */
};

boolean fn_829BD4C0(Cinfo_829BD4C0 *cinfo)
{
    Entropy_829BD4C0 *entropy = cinfo->entropy;
    int ci;

    cinfo->marker->discarded_bytes += entropy->bits_left / 8;
    entropy->bits_left = 0;

    if (!(*cinfo->marker->read_restart_marker)(cinfo))
        return 0;

    for (ci = 0; ci < cinfo->comps_in_scan; ci++)
        entropy->saved.last_dc_val[ci] = 0;
    entropy->saved.EOBRUN = 0;

    entropy->restarts_to_go = cinfo->restart_interval;

    if (cinfo->unread_marker == 0)
        entropy->insufficient_data = 0;

    return 1;
}
