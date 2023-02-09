/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

#ifndef CONFIG_H__
#define CONFIG_H__

#include "dmenu.h"

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[]
    = { "Source Code Pro:size=12",
        "JoyPixels:pixelsize=12:antialias=true:autohint=true" };
static const unsigned int bgalpha = 0xe0;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt
    = NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = { "#BBBBBB", "#222222" },
    [SchemeSel] = { "#EEEEEE", "#AA758C" }, // check colors from dwm's config.h
    [SchemeOut] = { "#000000", "#00FFFF" },
};
static const unsigned int alphas[SchemeLast][2] = {
    /*		fgalpha		bgalphga	*/
    [SchemeNorm] = { fgalpha, bgalpha },
    [SchemeSel] = { fgalpha, bgalpha },
    [SchemeOut] = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines
 */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

#endif /* CONFIG_H__ */
