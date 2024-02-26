/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

#ifndef CONFIG_H__
#define CONFIG_H__

static int topbar = 1;            /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;          /* -c option; centers dmenu on screen */
static int const min_width = 500; /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char const *fonts[] = {
        /* "SauceCodePro Nerd Font:size=12", */
        "JetBrainsMono Nerd Font:size=12", "JoyPixels:pixelsize=12:antialias=true:autohint=true"
};
static char const *prompt = NULL; /* -p  option; prompt to the left of input field */
static char const *colors[SchemeLast][2] = {
  /*     fg         bg       */
        [SchemeNorm] = {"#BBBBBB", "#222222"},
        [SchemeSel] = {"#EEEEEE", "#7E9CD8"},
        [SchemeSelHighlight] = {"#ffc978", "#005577"},
        [SchemeNormHighlight] = {"#ffc978", "#222222"},
        [SchemeOut] = {"#000000", "#00FFFF"},
        [SchemeOutHighlight] = {"#ffc978", "#00ffff"},
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines
 */
static unsigned int lines = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static char const worddelimiters[] = " /?\"&[]";

/* Size of the window border */
static unsigned int border_width = 2;

#endif /* CONFIG_H__ */
