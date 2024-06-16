/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

#ifndef CONFIG_H__
#define CONFIG_H__

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1; /* -c option; centers dmenu on screen */
static int const min_width = 500; /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char const *fonts[] = { "SauceCodePro Nerd Font:size=12", "JoyPixels:pixelsize=12:antialias=true:autohint=true" };
static char const *prompt = NULL; /* -p  option; prompt to the left of input field */
static char const *colors[SchemeLast][2] = {
    /*     fg         bg       */
        [SchemeNorm] = { "#BBBBBB", "#222222" },         [SchemeSel] = { "#EEEEEE", "#AA758C" },
        [SchemeSelHighlight] = { "#ffc978", "#005577" }, [SchemeNormHighlight] = { "#ffc978", "#222222" },
        [SchemeOut] = { "#000000", "#00FFFF" },          [SchemeCursor] = { "#222222", "#bbbbbb" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines
 */
static unsigned int lines = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static char const worddelimiters[] = " ";

/*
 * -vi option; if nonzero, vi mode is always enabled and can be
 * accessed with the global_esc keysym + mod mask
 */
static unsigned int vi_mode = 1;
static unsigned int const start_mode = 1;   /* mode to use when -vi is passed. 0 = insert mode, 1 = normal mode */
static Key global_esc = { XK_Escape, 0 }; /* escape key when vi mode is not enabled explicitly */
static Key const quit_keys[] = {
 /* keysym	modifier */
        { XK_q, 0 }
};

/* Size of the window border */
static unsigned int border_width = 2;

#endif /* CONFIG_H__ */
