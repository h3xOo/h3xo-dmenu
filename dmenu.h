#ifndef DMENU_H__
#define DMENU_H__

#include <X11/Xlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "drw.h"

/* macros */
#define INTERSECT(x, y, w, h, r)                                              \
    (MAX (0, MIN ((x) + (w), (r).x_org + (r).width) - MAX ((x), (r).x_org))   \
     && MAX (0,                                                               \
             MIN ((y) + (h), (r).y_org + (r).height) - MAX ((y), (r).y_org)))
#define LENGTH(X) (sizeof X / sizeof X[0])
#define TEXTW(X) (drw_fontset_getwidth (drw, (X)) + lrpad)

/* define opaqueness */
#define OPAQUE 0xFFU

/* enums */
enum
{
    SchemeNorm,
    SchemeSel,
    SchemeOut,
    SchemeLast
}; /* color schemes */

struct item
{
    char *text;
    struct item *left, *right;
    int out;
};

static char text[BUFSIZ] = "";
static char *embed;
static int bh, mw, mh;
static int inputw = 0, promptw, passwd = 0;
static int lrpad; /* sum of left and right padding */
static int reject_no_match = 0;
static size_t cursor;
static struct item *items = NULL;
static struct item *matches, *matchend;
static struct item *prev, *curr, *next, *sel;
static int mon = -1, screen;

static Atom clip, utf8;
static Display *dpy;
static Window root, parentwin, win;
static XIC xic;

static Drw *drw;
static int usergb = 0;
static Visual *visual;
static int depth;
static Colormap cmap;
static Clr *scheme[SchemeLast];

static int (*fstrncmp) (const char *, const char *, size_t) = strncmp;
static char *(*fstrstr) (const char *, const char *) = strstr;

static unsigned int textw_clamp (const char *str, unsigned int n);

#endif /* DMENU_H__ */
