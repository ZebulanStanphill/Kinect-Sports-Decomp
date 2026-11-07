/* Corresponds to libjpeg jdhuff.c process_restart (open-source IJG libjpeg). */
typedef unsigned char boolean;

typedef struct Cinfo_827C43E0 Cinfo_827C43E0;

typedef struct Marker_827C43E0 {
    int pad0[2];
    boolean (*read_restart_marker)(Cinfo_827C43E0 *cinfo); /* 0x08 */
    int pad1[2];
    unsigned int discarded_bytes;                      /* 0x14 */
} Marker_827C43E0;

typedef struct Saved_827C43E0 {
    unsigned int EOBRUN;                               /* 0x14 */
    int last_dc_val[4];                                /* 0x18 */
} Saved_827C43E0;

typedef struct Entropy_827C43E0 {
    int pad0[2];
    boolean insufficient_data;                         /* 0x08 */
    char pad1[3];
    int pad2;                                          /* 0x0c */
    int bits_left;                                     /* 0x10 */
    Saved_827C43E0 saved;                              /* 0x14 */
    unsigned int restarts_to_go;                       /* 0x28 */
} Entropy_827C43E0;

struct Cinfo_827C43E0 {
    char pad0[0xfc];
    unsigned int restart_interval;                     /* 0xfc */
    char pad1[0x124 - 0x100];
    int comps_in_scan;                                 /* 0x124 */
    char pad2[0x17c - 0x128];
    int unread_marker;                                 /* 0x17c */
    char pad3[0x194 - 0x180];
    Marker_827C43E0 *marker;                           /* 0x194 */
    Entropy_827C43E0 *entropy;                         /* 0x198 */
};

boolean fn_827C43E0(Cinfo_827C43E0 *cinfo)
{
    Entropy_827C43E0 *entropy = cinfo->entropy;
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
