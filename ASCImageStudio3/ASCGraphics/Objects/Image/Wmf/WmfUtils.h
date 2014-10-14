﻿#ifndef _WMF_UTILS_H
#define _WMF_UTILS_H

#include "WmfTypes.h"
#include <stdio.h>
#include <time.h>

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <math.h>
#ifdef DESKTOP_EDITOR_GRAPHICS

#include "../../../../../DesktopEditor/common/File.h"
#define UTF8_TO_U(val) NSFile::CUtf8Converter::GetUnicodeStringFromUTF8((BYTE*)val, strlen(val))
#define U_TO_UTF8(val) NSFile::CUtf8Converter::GetUtf8StringFromUnicode2(val, wcslen(val))
#if !defined(WIN32) && !defined(_WIN32_WCE)
//from MinGw wingdi.h

#define BI_RGB 0
#define BI_RLE8 1
#define BI_RLE4 2
#define BI_BITFIELDS 3
#define BI_JPEG 4
#define BI_PNG 5
#define LF_FACESIZE	32
#define LF_FULLFACESIZE	64
#define CA_NEGATIVE	1
#define CA_LOG_FILTER	2
#define ILLUMINANT_DEVICE_DEFAULT	0
#define ILLUMINANT_A	1
#define ILLUMINANT_B	2
#define ILLUMINANT_C	3
#define ILLUMINANT_D50	4
#define ILLUMINANT_D55	5
#define ILLUMINANT_D65	6
#define ILLUMINANT_D75	7
#define ILLUMINANT_F2	8
#define ILLUMINANT_MAX_INDEX	ILLUMINANT_F2
#define ILLUMINANT_TUNGSTEN	ILLUMINANT_A
#define ILLUMINANT_DAYLIGHT	ILLUMINANT_C
#define ILLUMINANT_FLUORESCENT	ILLUMINANT_F2
#define ILLUMINANT_NTSC	ILLUMINANT_C
#define RGB_GAMMA_MIN	2500
#define RGB_GAMMA_MAX	65000
#define REFERENCE_WHITE_MIN	6000
#define REFERENCE_WHITE_MAX	10000
#define REFERENCE_BLACK_MIN	0
#define REFERENCE_BLACK_MAX	4000
#define COLOR_ADJ_MIN	(-100)
#define COLOR_ADJ_MAX	100
#define CCHDEVICENAME 32
#define CCHFORMNAME 32
#define DI_COMPAT	4
#define DI_DEFAULTSIZE	8
#define DI_IMAGE	2
#define DI_MASK	1
#define DI_NORMAL	3
#define DI_APPBANDING 1
#define EMR_HEADER	1
#define EMR_POLYBEZIER 2
#define EMR_POLYGON	3
#define EMR_POLYLINE	4
#define EMR_POLYBEZIERTO	5
#define EMR_POLYLINETO 6
#define EMR_POLYPOLYLINE	7
#define EMR_POLYPOLYGON 8
#define EMR_SETWINDOWEXTEX	9
#define EMR_SETWINDOWORGEX	10
#define EMR_SETVIEWPORTEXTEX 11
#define EMR_SETVIEWPORTORGEX 12
#define EMR_SETBRUSHORGEX 13
#define EMR_EOF 14
#define EMR_SETPIXELV 15
#define EMR_SETMAPPERFLAGS 16
#define EMR_SETMAPMODE 17
#define EMR_SETBKMODE 18
#define EMR_SETPOLYFILLMODE 19
#define EMR_SETROP2 20
#define EMR_SETSTRETCHBLTMODE 21
#define EMR_SETTEXTALIGN 22
#define EMR_SETCOLORADJUSTMENT 23
#define EMR_SETTEXTCOLOR 24
#define EMR_SETBKCOLOR 25
#define EMR_OFFSETCLIPRGN 26
#define EMR_MOVETOEX 27
#define EMR_SETMETARGN 28
#define EMR_EXCLUDECLIPRECT 29
#define EMR_INTERSECTCLIPRECT 30
#define EMR_SCALEVIEWPORTEXTEX 31
#define EMR_SCALEWINDOWEXTEX 32
#define EMR_SAVEDC 33
#define EMR_RESTOREDC 34
#define EMR_SETWORLDTRANSFORM 35
#define EMR_MODIFYWORLDTRANSFORM 36
#define EMR_SELECTOBJECT 37
#define EMR_CREATEPEN 38
#define EMR_CREATEBRUSHINDIRECT 39
#define EMR_DELETEOBJECT 40
#define EMR_ANGLEARC 41
#define EMR_ELLIPSE  42
#define EMR_RECTANGLE 43
#define EMR_ROUNDRECT 44
#define EMR_ARC 45
#define EMR_CHORD 46
#define EMR_PIE 47
#define EMR_SELECTPALETTE 48
#define EMR_CREATEPALETTE 49
#define EMR_SETPALETTEENTRIES 50
#define EMR_RESIZEPALETTE 51
#define EMR_REALIZEPALETTE 52
#define EMR_EXTFLOODFILL 53
#define EMR_LINETO 54
#define EMR_ARCTO 55
#define EMR_POLYDRAW 56
#define EMR_SETARCDIRECTION 57
#define EMR_SETMITERLIMIT 58
#define EMR_BEGINPATH 59
#define EMR_ENDPATH 60
#define EMR_CLOSEFIGURE 61
#define EMR_FILLPATH 62
#define EMR_STROKEANDFILLPATH 63
#define EMR_STROKEPATH 64
#define EMR_FLATTENPATH 65
#define EMR_WIDENPATH 66
#define EMR_SELECTCLIPPATH 67
#define EMR_ABORTPATH 68
#define EMR_GDICOMMENT 70
#define EMR_FILLRGN 71
#define EMR_FRAMERGN 72
#define EMR_INVERTRGN 73
#define EMR_PAINTRGN 74
#define EMR_EXTSELECTCLIPRGN 75
#define EMR_BITBLT 76
#define EMR_STRETCHBLT 77
#define EMR_MASKBLT 78
#define EMR_PLGBLT 79
#define EMR_SETDIBITSTODEVICE 80
#define EMR_STRETCHDIBITS 81
#define EMR_EXTCREATEFONTINDIRECTW 82
#define EMR_EXTTEXTOUTA 83
#define EMR_EXTTEXTOUTW 84
#define EMR_POLYBEZIER16 85
#define EMR_POLYGON16 86
#define EMR_POLYLINE16 87
#define EMR_POLYBEZIERTO16 88
#define EMR_POLYLINETO16 89
#define EMR_POLYPOLYLINE16 90
#define EMR_POLYPOLYGON16 91
#define EMR_POLYDRAW16 92
#define EMR_CREATEMONOBRUSH 93
#define EMR_CREATEDIBPATTERNBRUSHPT 94
#define EMR_EXTCREATEPEN 95
#define EMR_POLYTEXTOUTA 96
#define EMR_POLYTEXTOUTW 97
#define EMR_SETICMMODE 98
#define EMR_CREATECOLORSPACE 99
#define EMR_SETCOLORSPACE 100
#define EMR_DELETECOLORSPACE 101
#define EMR_GLSRECORD 102
#define EMR_GLSBOUNDEDRECORD 103
#define EMR_PIXELFORMAT 104
#define ENHMETA_SIGNATURE 1179469088
#define EPS_SIGNATURE 0x46535045

#define META_SETBKCOLOR	0x201
#define META_SETBKMODE	0x102
#define META_SETMAPMODE	0x103
#define META_SETROP2	0x104
#define META_SETRELABS	0x105
#define META_SETPOLYFILLMODE	0x106
#define META_SETSTRETCHBLTMODE	0x107
#define META_SETTEXTCHAREXTRA	0x108
#define META_SETTEXTCOLOR	0x209
#define META_SETTEXTJUSTIFICATION	0x20A
#define META_SETWINDOWORG	0x20B
#define META_SETWINDOWEXT	0x20C
#define META_SETVIEWPORTORG	0x20D
#define META_SETVIEWPORTEXT	0x20E
#define META_OFFSETWINDOWORG	0x20F
#define META_SCALEWINDOWEXT	0x410
#define META_OFFSETVIEWPORTORG	0x211
#define META_SCALEVIEWPORTEXT	0x412
#define META_LINETO	0x213
#define META_MOVETO	0x214
#define META_EXCLUDECLIPRECT	0x415
#define META_INTERSECTCLIPRECT	0x416
#define META_ARC	0x817
#define META_ELLIPSE	0x418
#define META_FLOODFILL	0x419
#define META_PIE	0x81A
#define META_RECTANGLE	0x41B
#define META_ROUNDRECT	0x61C
#define META_PATBLT	0x61D
#define META_SAVEDC	0x1E
#define META_SETPIXEL	0x41F
#define META_OFFSETCLIPRGN	0x220
#define META_TEXTOUT	0x521
#define META_BITBLT	0x922
#define META_STRETCHBLT	0xB23
#define META_POLYGON	0x324
#define META_POLYLINE	0x325
#define META_ESCAPE	0x626
#define META_RESTOREDC	0x127
#define META_FILLREGION	0x228
#define META_FRAMEREGION	0x429
#define META_INVERTREGION	0x12A
#define META_PAINTREGION	0x12B
#define META_SELECTCLIPREGION	0x12C
#define META_SELECTOBJECT	0x12D
#define META_SETTEXTALIGN	0x12E
#define META_CHORD	0x830
#define META_SETMAPPERFLAGS	0x231
#define META_EXTTEXTOUT	0xa32
#define META_SETDIBTODEV	0xd33
#define META_SELECTPALETTE	0x234
#define META_REALIZEPALETTE	0x35
#define META_ANIMATEPALETTE	0x436
#define META_SETPALENTRIES	0x37
#define META_POLYPOLYGON	0x538
#define META_RESIZEPALETTE	0x139
#define META_DIBBITBLT	0x940
#define META_DIBSTRETCHBLT	0xb41
#define META_DIBCREATEPATTERNBRUSH	0x142
#define META_STRETCHDIB	0xf43
#define META_EXTFLOODFILL	0x548
#define META_DELETEOBJECT	0x1f0
#define META_CREATEPALETTE	0xf7
#define META_CREATEPATTERNBRUSH	0x1F9
#define META_CREATEPENINDIRECT	0x2FA
#define META_CREATEFONTINDIRECT	0x2FB
#define META_CREATEBRUSHINDIRECT	0x2FC
#define META_CREATEREGION	0x6FF
#define PT_MOVETO	6
#define PT_LINETO	2
#define PT_BEZIERTO	4
#define PT_CLOSEFIGURE 1
#define ELF_VENDOR_SIZE	4
#define ELF_VERSION	0
#define ELF_CULTURE_LATIN	0
#define PFD_TYPE_RGBA	0
#define PFD_TYPE_COLORINDEX	1
#define PFD_MAIN_PLANE	0
#define PFD_OVERLAY_PLANE	1
#define PFD_UNDERLAY_PLANE	(-1)
#define PFD_DOUBLEBUFFER	1
#define PFD_STEREO	2
#define PFD_DRAW_TO_WINDOW	4
#define PFD_DRAW_TO_BITMAP	8
#define PFD_SUPPORT_GDI	16
#define PFD_SUPPORT_OPENGL	32
#define PFD_GENERIC_FORMAT	64
#define PFD_NEED_PALETTE	128
#define PFD_NEED_SYSTEM_PALETTE	0x00000100
#define PFD_SWAP_EXCHANGE	0x00000200
#define PFD_SWAP_COPY	0x00000400
#define PFD_SWAP_LAYER_BUFFERS	0x00000800
#define PFD_GENERIC_ACCELERATED	0x00001000
#define PFD_DEPTH_DONTCARE	0x20000000
#define PFD_DOUBLEBUFFER_DONTCARE	0x40000000
#define PFD_STEREO_DONTCARE	0x80000000
#define SP_ERROR	(-1)
#define SP_OUTOFDISK	(-4)
#define SP_OUTOFMEMORY	(-5)
#define SP_USERABORT	(-3)
#define SP_APPABORT	(-2)
#define BLACKNESS	0x00000042
#define NOTSRCERASE	0x001100A6
#define NOTSRCCOPY	0x00330008
#define SRCERASE	0x00440328
#define DSTINVERT	0x00550009
#define PATINVERT	0x005A0049
#define SRCINVERT	0x00660046
#define SRCAND	0x008800C6
#define MERGEPAINT	0x00BB0226
#define MERGECOPY	0x00C000CA
#define SRCCOPY 0x00CC0020
#define SRCPAINT	0x00EE0086
#define PATCOPY	0x00F00021
#define PATPAINT	0x00FB0A09
#define WHITENESS	0x00FF0062
#define CAPTUREBLT	0x40000000
#define NOMIRRORBITMAP	0x80000000
#define R2_BLACK	1
#define R2_COPYPEN	13
#define R2_MASKNOTPEN	3
#define R2_MASKPEN	9
#define R2_MASKPENNOT	5
#define R2_MERGENOTPEN	12
#define R2_MERGEPEN	15
#define R2_MERGEPENNOT	14
#define R2_NOP	11
#define R2_NOT	6
#define R2_NOTCOPYPEN	4
#define R2_NOTMASKPEN	8
#define R2_NOTMERGEPEN	2
#define R2_NOTXORPEN	10
#define R2_WHITE	16
#define R2_XORPEN	7
#define CM_OUT_OF_GAMUT	255
#define CM_IN_GAMUT	0
#define RGN_AND 1
#define RGN_COPY	5
#define RGN_DIFF	4
#define RGN_OR	2
#define RGN_XOR	3
#define NULLREGION	1
#define SIMPLEREGION	2
#define COMPLEXREGION	3
#define ERROR 0
#define CBM_INIT	4
#define DIB_PAL_COLORS	1
#define DIB_RGB_COLORS	0
#define FW_DONTCARE	0
#define FW_THIN	100
#define FW_EXTRALIGHT	200
#define FW_ULTRALIGHT	FW_EXTRALIGHT
#define FW_LIGHT	300
#define FW_NORMAL	400
#define FW_REGULAR	400
#define FW_MEDIUM	500
#define FW_SEMIBOLD	600
#define FW_DEMIBOLD	FW_SEMIBOLD
#define FW_BOLD	700
#define FW_EXTRABOLD	800
#define FW_ULTRABOLD	FW_EXTRABOLD
#define FW_HEAVY	900
#define FW_BLACK	FW_HEAVY
#define ANSI_CHARSET	0
#define DEFAULT_CHARSET	1
#define SYMBOL_CHARSET	2
#define SHIFTJIS_CHARSET	128
#define HANGEUL_CHARSET	129
#define HANGUL_CHARSET  129
#define GB2312_CHARSET	134
#define CHINESEBIG5_CHARSET	136
#define GREEK_CHARSET	161
#define TURKISH_CHARSET	162
#define HEBREW_CHARSET	177
#define ARABIC_CHARSET	178
#define BALTIC_CHARSET	186
#define RUSSIAN_CHARSET	204
#define THAI_CHARSET	222
#define EASTEUROPE_CHARSET	238
#define OEM_CHARSET	255
#define JOHAB_CHARSET	130
#define VIETNAMESE_CHARSET	163
#define MAC_CHARSET 77
#define OUT_DEFAULT_PRECIS	0
#define OUT_STRING_PRECIS	1
#define OUT_CHARACTER_PRECIS	2
#define OUT_STROKE_PRECIS	3
#define OUT_TT_PRECIS	4
#define OUT_DEVICE_PRECIS	5
#define OUT_RASTER_PRECIS	6
#define OUT_TT_ONLY_PRECIS	7
#define OUT_OUTLINE_PRECIS	8
/* http://www.pinvoke.net/default.aspx/Structures/LOGFONT.html */
#define OUT_PS_ONLY_PRECIS      10
#define CLIP_DEFAULT_PRECIS	0
#define CLIP_CHARACTER_PRECIS	1
#define CLIP_STROKE_PRECIS	2
#define CLIP_MASK	15
#define CLIP_LH_ANGLES	16
#define CLIP_TT_ALWAYS	32
#define CLIP_EMBEDDED	128
#define DEFAULT_QUALITY	0
#define DRAFT_QUALITY	1
#define PROOF_QUALITY	2
#define NONANTIALIASED_QUALITY 3
#define ANTIALIASED_QUALITY 4

#define DEFAULT_PITCH	0
#define FIXED_PITCH	1
#define VARIABLE_PITCH	2
#define MONO_FONT 8
#define FF_DECORATIVE	80
#define FF_DONTCARE	0
#define FF_MODERN	48
#define FF_ROMAN	16
#define FF_SCRIPT	64
#define FF_SWISS	32
#define PANOSE_COUNT 10
#define PAN_FAMILYTYPE_INDEX 0
#define PAN_SERIFSTYLE_INDEX 1
#define PAN_WEIGHT_INDEX 2
#define PAN_PROPORTION_INDEX 3
#define PAN_CONTRAST_INDEX 4
#define PAN_STROKEVARIATION_INDEX 5
#define PAN_ARMSTYLE_INDEX 6
#define PAN_LETTERFORM_INDEX 7
#define PAN_MIDLINE_INDEX 8
#define PAN_XHEIGHT_INDEX 9
#define PAN_CULTURE_LATIN 0
#define PAN_ANY 0
#define PAN_NO_FIT 1
#define PAN_FAMILY_TEXT_DISPLAY 2
#define PAN_FAMILY_SCRIPT 3
#define PAN_FAMILY_DECORATIVE 4
#define PAN_FAMILY_PICTORIAL 5
#define PAN_SERIF_COVE 2
#define PAN_SERIF_OBTUSE_COVE 3
#define PAN_SERIF_SQUARE_COVE 4
#define PAN_SERIF_OBTUSE_SQUARE_COVE 5
#define PAN_SERIF_SQUARE 6
#define PAN_SERIF_THIN 7
#define PAN_SERIF_BONE 8
#define PAN_SERIF_EXAGGERATED 9
#define PAN_SERIF_TRIANGLE 10
#define PAN_SERIF_NORMAL_SANS 11
#define PAN_SERIF_OBTUSE_SANS 12
#define PAN_SERIF_PERP_SANS 13
#define PAN_SERIF_FLARED 14
#define PAN_SERIF_ROUNDED 15
#define PAN_WEIGHT_VERY_LIGHT 2
#define PAN_WEIGHT_LIGHT 3
#define PAN_WEIGHT_THIN 4
#define PAN_WEIGHT_BOOK 5
#define PAN_WEIGHT_MEDIUM 6
#define PAN_WEIGHT_DEMI 7
#define PAN_WEIGHT_BOLD 8
#define PAN_WEIGHT_HEAVY 9
#define PAN_WEIGHT_BLACK 10
#define PAN_WEIGHT_NORD 11
#define PAN_PROP_OLD_STYLE 2
#define PAN_PROP_MODERN 3
#define PAN_PROP_EVEN_WIDTH 4
#define PAN_PROP_EXPANDED 5
#define PAN_PROP_CONDENSED 6
#define PAN_PROP_VERY_EXPANDED 7
#define PAN_PROP_VERY_CONDENSED 8
#define PAN_PROP_MONOSPACED 9
#define PAN_CONTRAST_NONE 2
#define PAN_CONTRAST_VERY_LOW 3
#define PAN_CONTRAST_LOW 4
#define PAN_CONTRAST_MEDIUM_LOW 5
#define PAN_CONTRAST_MEDIUM 6
#define PAN_CONTRAST_MEDIUM_HIGH 7
#define PAN_CONTRAST_HIGH 8
#define PAN_CONTRAST_VERY_HIGH 9
#define PAN_STROKE_GRADUAL_DIAG 2
#define PAN_STROKE_GRADUAL_TRAN 3
#define PAN_STROKE_GRADUAL_VERT 4
#define PAN_STROKE_GRADUAL_HORZ 5
#define PAN_STROKE_RAPID_VERT 6
#define PAN_STROKE_RAPID_HORZ 7
#define PAN_STROKE_INSTANT_VERT 8
#define PAN_STRAIGHT_ARMS_HORZ 2
#define PAN_STRAIGHT_ARMS_WEDGE 3
#define PAN_STRAIGHT_ARMS_VERT 4
#define PAN_STRAIGHT_ARMS_SINGLE_SERIF 5
#define PAN_STRAIGHT_ARMS_DOUBLE_SERIF 6
#define PAN_BENT_ARMS_HORZ 7
#define PAN_BENT_ARMS_WEDGE 8
#define PAN_BENT_ARMS_VERT 9
#define PAN_BENT_ARMS_SINGLE_SERIF 10
#define PAN_BENT_ARMS_DOUBLE_SERIF 11
#define PAN_LETT_NORMAL_CONTACT 2
#define PAN_LETT_NORMAL_WEIGHTED 3
#define PAN_LETT_NORMAL_BOXED 4
#define PAN_LETT_NORMAL_FLATTENED 5
#define PAN_LETT_NORMAL_ROUNDED 6
#define PAN_LETT_NORMAL_OFF_CENTER 7
#define PAN_LETT_NORMAL_SQUARE 8
#define PAN_LETT_OBLIQUE_CONTACT 9
#define PAN_LETT_OBLIQUE_WEIGHTED 10
#define PAN_LETT_OBLIQUE_BOXED 11
#define PAN_LETT_OBLIQUE_FLATTENED 12
#define PAN_LETT_OBLIQUE_ROUNDED 13
#define PAN_LETT_OBLIQUE_OFF_CENTER 14
#define PAN_LETT_OBLIQUE_SQUARE 15
#define PAN_MIDLINE_STANDARD_TRIMMED 2
#define PAN_MIDLINE_STANDARD_POINTED 3
#define PAN_MIDLINE_STANDARD_SERIFED 4
#define PAN_MIDLINE_HIGH_TRIMMED 5
#define PAN_MIDLINE_HIGH_POINTED 6
#define PAN_MIDLINE_HIGH_SERIFED 7
#define PAN_MIDLINE_CONSTANT_TRIMMED 8
#define PAN_MIDLINE_CONSTANT_POINTED 9
#define PAN_MIDLINE_CONSTANT_SERIFED 10
#define PAN_MIDLINE_LOW_TRIMMED 11
#define PAN_MIDLINE_LOW_POINTED 12
#define PAN_MIDLINE_LOW_SERIFED 13
#define PAN_XHEIGHT_CONSTANT_SMALL 2
#define PAN_XHEIGHT_CONSTANT_STD 3
#define PAN_XHEIGHT_CONSTANT_LARGE 4
#define PAN_XHEIGHT_DUCKING_SMALL 5
#define PAN_XHEIGHT_DUCKING_STD 6
#define PAN_XHEIGHT_DUCKING_LARGE 7
#define FS_LATIN1 1
#define FS_LATIN2 2
#define FS_CYRILLIC 4
#define FS_GREEK 8
#define FS_TURKISH 16
#define FS_HEBREW 32
#define FS_ARABIC 64
#define FS_BALTIC 128
#define FS_THAI 0x10000
#define FS_JISJAPAN 0x20000
#define FS_CHINESESIMP 0x40000
#define FS_WANSUNG 0x80000
#define FS_CHINESETRAD 0x100000
#define FS_JOHAB 0x200000
#define FS_SYMBOL 0x80000000
#define HS_BDIAGONAL	3
#define HS_CROSS	4
#define HS_DIAGCROSS	5
#define HS_FDIAGONAL	2
#define HS_HORIZONTAL	0
#define HS_VERTICAL	1
#define PS_GEOMETRIC	65536
#define PS_COSMETIC	0
#define PS_ALTERNATE	8
#define PS_SOLID	0
#define PS_DASH	1
#define PS_DOT	2
#define PS_DASHDOT	3
#define PS_DASHDOTDOT	4
#define PS_NULL	5
#define PS_USERSTYLE	7
#define PS_INSIDEFRAME	6
#define PS_ENDCAP_ROUND	0
#define PS_ENDCAP_SQUARE	256
#define PS_ENDCAP_FLAT	512
#define PS_JOIN_BEVEL	4096
#define PS_JOIN_MITER	8192
#define PS_JOIN_ROUND	0
#define PS_JOIN_MASK	614400
#define PS_STYLE_MASK	15
#define PS_ENDCAP_MASK	3840
#define PS_TYPE_MASK	983040
#define ALTERNATE	1
#define WINDING	2
#define DC_BINNAMES	12
#define DC_BINS	6
#define DC_COPIES	18
#define DC_DRIVER	11
#define DC_DATATYPE_PRODUCED	21
#define DC_DUPLEX	7
#define DC_EMF_COMPLIANT	20
#define DC_ENUMRESOLUTIONS	13
#define DC_EXTRA	9
#define DC_FIELDS	1
#define DC_FILEDEPENDENCIES	14
#define DC_MAXEXTENT	5
#define DC_MINEXTENT	4
#define DC_ORIENTATION	17
#define DC_PAPERNAMES	16
#define DC_PAPERS	2
#define DC_PAPERSIZE	3
#define DC_SIZE	8
#define DC_TRUETYPE	15
#define DCTT_BITMAP	1
#define DCTT_DOWNLOAD	2
#define DCTT_SUBDEV	4
#define DCTT_DOWNLOAD_OUTLINE 8
#define DC_VERSION	10
#define DC_BINADJUST	19
#define DC_EMF_COMPLIANT	20
#define DC_DATATYPE_PRODUCED	21
#define DC_MANUFACTURER	23
#define DC_MODEL	24

#define DCBA_FACEUPNONE	0
#define DCBA_FACEUPCENTER	1
#define DCBA_FACEUPLEFT	2
#define DCBA_FACEUPRIGHT	3
#define DCBA_FACEDOWNNONE	256
#define DCBA_FACEDOWNCENTER	257
#define DCBA_FACEDOWNLEFT	258
#define DCBA_FACEDOWNRIGHT	259
#define FLOODFILLBORDER 0
#define FLOODFILLSURFACE 1
#define ETO_CLIPPED 0x0004
#define ETO_GLYPH_INDEX 0x0010
#define ETO_OPAQUE 0x0002
#define ETO_NUMERICSLATIN 0x0800
#define ETO_NUMERICSLOCAL 0x0400
#define ETO_RTLREADING 0x0080
#define ETO_IGNORELANGUAGE 0x1000

#define GDICOMMENT_WINDOWS_METAFILE (-2147483647)
#define GDICOMMENT_BEGINGROUP 2
#define GDICOMMENT_ENDGROUP 3
#define GDICOMMENT_MULTIFORMATS 1073741828
#define GDICOMMENT_IDENTIFIER 1128875079
#define AD_COUNTERCLOCKWISE 1
#define AD_CLOCKWISE 2
#define RDH_RECTANGLES	1
#define GCPCLASS_LATIN	1
#define GCPCLASS_HEBREW	2
#define GCPCLASS_ARABIC	2
#define GCPCLASS_NEUTRAL	3
#define GCPCLASS_LOCALNUMBER	4
#define GCPCLASS_LATINNUMBER	5
#define GCPCLASS_LATINNUMERICTERMINATOR	6
#define GCPCLASS_LATINNUMERICSEPARATOR	7
#define GCPCLASS_NUMERICSEPARATOR	8
#define GCPCLASS_PREBOUNDLTR	128
#define GCPCLASS_PREBOUNDRTL	64
#define GCPCLASS_POSTBOUNDLTR	32
#define GCPCLASS_POSTBOUNDRTL	16
#define GCPGLYPH_LINKBEFORE	0x8000
#define GCPGLYPH_LINKAFTER	0x4000
#define DCB_DISABLE 8
#define DCB_ENABLE 4
#define DCB_RESET 1
#define DCB_SET 3
#define DCB_ACCUMULATE 2
#define DCB_DIRTY	2
#define OBJ_BRUSH 2
#define OBJ_PEN 1
#define OBJ_PAL 5
#define OBJ_FONT 6
#define OBJ_BITMAP 7
#define OBJ_EXTPEN 11
#define OBJ_REGION 8
#define OBJ_DC 3
#define OBJ_MEMDC 10
#define OBJ_METAFILE 9
#define OBJ_METADC 4
#define OBJ_ENHMETAFILE 13
#define OBJ_ENHMETADC 12
#define DRIVERVERSION 0
#define TECHNOLOGY 2
#define DT_PLOTTER 0
#define DT_RASDISPLAY 1
#define DT_RASPRINTER 2
#define DT_RASCAMERA 3
#define DT_CHARSTREAM 4
#define DT_METAFILE 5
#define DT_DISPFILE 6
#define HORZSIZE 4
#define VERTSIZE 6
#define HORZRES 8
#define VERTRES 10
#define LOGPIXELSX 88
#define LOGPIXELSY 90
#define BITSPIXEL 12
#define PLANES 14
#define NUMBRUSHES 16
#define NUMPENS 18
#define NUMFONTS 22
#define NUMCOLORS 24
#define NUMMARKERS 20
#define ASPECTX 40
#define ASPECTY 42
#define ASPECTXY 44
#define PDEVICESIZE 26
#define CLIPCAPS 36
#define SIZEPALETTE 104
#define NUMRESERVED 106
#define COLORRES 108
#define PHYSICALWIDTH 110
#define PHYSICALHEIGHT 111
#define PHYSICALOFFSETX 112
#define PHYSICALOFFSETY 113
#define SCALINGFACTORX 114
#define SCALINGFACTORY 115
#define VREFRESH 116
#define DESKTOPHORZRES 118
#define DESKTOPVERTRES 117
#define BLTALIGNMENT 119

#define RASTERCAPS 38
#define RC_BANDING 2
#define RC_BITBLT 1
#define RC_BITMAP64 8
#define RC_DI_BITMAP 128
#define RC_DIBTODEV 512
#define RC_FLOODFILL 4096
#define RC_GDI20_OUTPUT 16
#define RC_PALETTE 256
#define RC_SCALING 4
#define RC_STRETCHBLT 2048
#define RC_STRETCHDIB 8192
#define RC_DEVBITS 0x8000
#define RC_OP_DX_OUTPUT 0x4000
#define CURVECAPS 28
#define CC_NONE 0
#define CC_CIRCLES 1
#define CC_PIE 2
#define CC_CHORD 4
#define CC_ELLIPSES 8
#define CC_WIDE 16
#define CC_STYLED 32
#define CC_WIDESTYLED 64
#define CC_INTERIORS 128
#define CC_ROUNDRECT 256
#define LINECAPS 30
#define LC_NONE 0
#define LC_POLYLINE 2
#define LC_MARKER 4
#define LC_POLYMARKER 8
#define LC_WIDE 16
#define LC_STYLED 32
#define LC_WIDESTYLED 64
#define LC_INTERIORS 128
#define POLYGONALCAPS 32
#define RC_BANDING 2
#define RC_BIGFONT 1024
#define RC_BITBLT 1
#define RC_BITMAP64 8
#define RC_DEVBITS 0x8000
#define RC_DI_BITMAP 128
#define RC_GDI20_OUTPUT 16
#define RC_GDI20_STATE 32
#define RC_NONE 0
#define RC_OP_DX_OUTPUT 0x4000
#define RC_PALETTE 256
#define RC_SAVEBITMAP 64
#define RC_SCALING 4
#define PC_NONE 0
#define PC_POLYGON 1
#define PC_POLYPOLYGON 256
#define PC_PATHS 512
#define PC_RECTANGLE 2
#define PC_WINDPOLYGON 4
#define PC_SCANLINE 8
#define PC_TRAPEZOID 4
#define PC_WIDE 16
#define PC_STYLED 32
#define PC_WIDESTYLED 64
#define PC_INTERIORS 128
#define PC_PATHS 512
#define TEXTCAPS 34
#define TC_OP_CHARACTER 1
#define TC_OP_STROKE 2
#define TC_CP_STROKE 4
#define TC_CR_90 8
#define TC_CR_ANY 16
#define TC_SF_X_YINDEP 32
#define TC_SA_DOUBLE 64
#define TC_SA_INTEGER 128
#define TC_SA_CONTIN 256
#define TC_EA_DOUBLE 512
#define TC_IA_ABLE 1024
#define TC_UA_ABLE 2048
#define TC_SO_ABLE 4096
#define TC_RA_ABLE 8192
#define TC_VA_ABLE 16384
#define TC_RESERVED 32768
#define TC_SCROLLBLT 65536
#define GCP_DBCS 1
#define GCP_ERROR 0x8000
#define GCP_CLASSIN 0x80000
#define GCP_DIACRITIC 256
#define GCP_DISPLAYZWG 0x400000
#define GCP_GLYPHSHAPE 16
#define GCP_JUSTIFY 0x10000
#define GCP_JUSTIFYIN 0x200000
#define GCP_KASHIDA 1024
#define GCP_LIGATE 32
#define GCP_MAXEXTENT 0x100000
#define GCP_NEUTRALOVERRIDE 0x2000000
#define GCP_NUMERICOVERRIDE 0x1000000
#define GCP_NUMERICSLATIN 0x4000000
#define GCP_NUMERICSLOCAL 0x8000000
#define GCP_REORDER 2
#define GCP_SYMSWAPOFF 0x800000
#define GCP_USEKERNING 8
#define FLI_GLYPHS 0x40000
#define FLI_MASK 0x103b
#define GGO_METRICS 0
#define GGO_BITMAP 1
#define GGO_NATIVE 2
#define GGO_BEZIER 3
#define GGO_GRAY2_BITMAP 4
#define GGO_GRAY4_BITMAP 5
#define GGO_GRAY8_BITMAP 6
#define GGO_GLYPH_INDEX 128

#define GM_COMPATIBLE 1
#define GM_ADVANCED 2
#define MM_ANISOTROPIC 8
#define MM_HIENGLISH 5
#define MM_HIMETRIC 3
#define MM_ISOTROPIC 7
#define MM_LOENGLISH 4
#define MM_LOMETRIC 2
#define MM_TEXT 1
#define MM_TWIPS 6
#define MM_MAX_FIXEDSCALE	MM_TWIPS
#define ABSOLUTE	1
#define RELATIVE	2
#define PC_EXPLICIT 2
#define PC_NOCOLLAPSE 4
#define PC_RESERVED 1
#define CLR_NONE 0xffffffff
#define CLR_INVALID CLR_NONE
#define CLR_DEFAULT 0xff000000
#define PT_MOVETO 6
#define PT_LINETO 2
#define PT_BEZIERTO 4
#define PT_CLOSEFIGURE 1
#define TT_AVAILABLE 1
#define TT_ENABLED 2
#define BLACK_BRUSH 4
#define DKGRAY_BRUSH 3
#define GRAY_BRUSH 2
#define HOLLOW_BRUSH 5
#define LTGRAY_BRUSH 1
#define NULL_BRUSH 5
#define WHITE_BRUSH 0
#define BLACK_PEN 7
#define NULL_PEN 8
#define WHITE_PEN 6
#define ANSI_FIXED_FONT 11
#define ANSI_VAR_FONT 12
#define DEVICE_DEFAULT_FONT 14
#define DEFAULT_GUI_FONT 17
#define OEM_FIXED_FONT 10
#define SYSTEM_FONT 13
#define SYSTEM_FIXED_FONT 16
#define DEFAULT_PALETTE 15

#define SYSPAL_ERROR 0
#define SYSPAL_STATIC 1
#define SYSPAL_NOSTATIC 2
#define SYSPAL_NOSTATIC256 3 
#define TA_BASELINE 24
#define TA_BOTTOM 8
#define TA_TOP 0
#define TA_CENTER 6
#define TA_LEFT 0
#define TA_RIGHT 2
#define TA_RTLREADING 256
#define TA_NOUPDATECP 0
#define TA_UPDATECP 1
#define TA_MASK (TA_BASELINE+TA_CENTER+TA_UPDATECP+TA_RTLREADING)
#define VTA_BASELINE 24
#define VTA_CENTER 6
#define VTA_LEFT TA_BOTTOM
#define VTA_RIGHT TA_TOP
#define VTA_BOTTOM TA_RIGHT
#define VTA_TOP TA_LEFT
#define MWT_IDENTITY 1
#define MWT_LEFTMULTIPLY 2
#define MWT_RIGHTMULTIPLY 3
#define OPAQUE 2
#define TRANSPARENT 1
#define BLACKONWHITE 1
#define WHITEONBLACK 2
#define COLORONCOLOR 3
#define HALFTONE 4
#define MAXSTRETCHBLTMODE 4
#define STRETCH_ANDSCANS 1
#define STRETCH_DELETESCANS 3
#define STRETCH_HALFTONE 4
#define STRETCH_ORSCANS 2
#define TCI_SRCCHARSET 1
#define TCI_SRCCODEPAGE 2
#define TCI_SRCFONTSIG 3
#define ICM_ON 2
#define ICM_OFF 1
#define ICM_QUERY 3
#define NEWFRAME	1
#define ABORTDOC	2
#define NEXTBAND	3
#define SETCOLORTABLE	4
#define GETCOLORTABLE	5
#define FLUSHOUTPUT	6
#define DRAFTMODE	7
#define QUERYESCSUPPORT	8
#define SETABORTPROC	9
#define STARTDOC	10
#define ENDDOC	11
#define GETPHYSPAGESIZE	12
#define GETPRINTINGOFFSET	13
#define GETSCALINGFACTOR	14
#define MFCOMMENT	15
#define GETPENWIDTH	16
#define SETCOPYCOUNT	17
#define SELECTPAPERSOURCE	18
#define DEVICEDATA	19
#define PASSTHROUGH	19
#define GETTECHNOLGY	20
#define GETTECHNOLOGY	20
#define SETLINECAP	21
#define SETLINEJOIN	22
#define SETMITERLIMIT	23
#define BANDINFO	24
#define DRAWPATTERNRECT	25
#define GETVECTORPENSIZE	26
#define GETVECTORBRUSHSIZE	27
#define ENABLEDUPLEX	28
#define GETSETPAPERBINS	29
#define GETSETPRINTORIENT	30
#define ENUMPAPERBINS	31
#define SETDIBSCALING	32
#define EPSPRINTING	33
#define ENUMPAPERMETRICS	34
#define GETSETPAPERMETRICS	35
#define POSTSCRIPT_DATA	37
#define POSTSCRIPT_IGNORE	38
#define MOUSETRAILS	39
#define GETDEVICEUNITS	42
#define GETEXTENDEDTEXTMETRICS	256
#define GETEXTENTTABLE	257
#define GETPAIRKERNTABLE	258
#define GETTRACKKERNTABLE	259
#define EXTTEXTOUT	512
#define GETFACENAME	513
#define DOWNLOADFACE	514
#define ENABLERELATIVEWIDTHS	768
#define ENABLEPAIRKERNING	769
#define SETKERNTRACK	770
#define SETALLJUSTVALUES	771
#define SETCHARSET	772
#define STRETCHBLT	2048
#define GETSETSCREENPARAMS	3072
#define QUERYDIBSUPPORT	3073
#define BEGIN_PATH	4096
#define CLIP_TO_PATH	4097
#define END_PATH	4098
#define EXT_DEVICE_CAPS	4099
#define RESTORE_CTM	4100
#define SAVE_CTM	4101
#define SET_ARC_DIRECTION	4102
#define SET_BACKGROUND_COLOR	4103
#define SET_POLY_MODE	4104
#define SET_SCREEN_ANGLE	4105
#define SET_SPREAD	4106
#define TRANSFORM_CTM	4107
#define SET_CLIP_BOX	4108
#define SET_BOUNDS	4109
#define SET_MIRROR_MODE	4110
#define OPENCHANNEL	4110
#define DOWNLOADHEADER	4111
#define CLOSECHANNEL	4112
#define POSTSCRIPT_PASSTHROUGH	4115
#define ENCAPSULATED_POSTSCRIPT	4116
#define QDI_SETDIBITS	1
#define QDI_GETDIBITS	2
#define QDI_DIBTOSCREEN	4
#define QDI_STRETCHDIB	8
#define SP_NOTREPORTED	0x4000
#define PR_JOBSTATUS	0
#define ASPECT_FILTERING	1
#define BS_SOLID	0
#define BS_NULL	1
#define BS_HOLLOW	1
#define BS_HATCHED	2
#define BS_PATTERN	3
#define BS_INDEXED	4
#define BS_DIBPATTERN	5
#define BS_DIBPATTERNPT	6
#define BS_PATTERN8X8	7
#define BS_DIBPATTERN8X8	8
#define LCS_CALIBRATED_RGB	0
#define LCS_DEVICE_RGB	1
#define LCS_DEVICE_CMYK	2
#define LCS_GM_BUSINESS	1
#define LCS_GM_GRAPHICS	2
#define LCS_GM_IMAGES	4
#define RASTER_FONTTYPE	1
#define DEVICE_FONTTYPE	2
#define TRUETYPE_FONTTYPE	4
#define DMORIENT_PORTRAIT   1
#define DMORIENT_LANDSCAPE  2
#define DMPAPER_FIRST	1
#define DMPAPER_LETTER	1
#define DMPAPER_LETTERSMALL	2
#define DMPAPER_TABLOID	3
#define DMPAPER_LEDGER	4
#define DMPAPER_LEGAL	5
#define DMPAPER_STATEMENT	6
#define DMPAPER_EXECUTIVE	7
#define DMPAPER_A3	8
#define DMPAPER_A4	9
#define DMPAPER_A4SMALL	10
#define DMPAPER_A5	11
#define DMPAPER_B4	12
#define DMPAPER_B5	13
#define DMPAPER_FOLIO	14
#define DMPAPER_QUARTO	15
#define DMPAPER_10X14	16
#define DMPAPER_11X17	17
#define DMPAPER_NOTE	18
#define DMPAPER_ENV_9	19
#define DMPAPER_ENV_10	20
#define DMPAPER_ENV_11	21
#define DMPAPER_ENV_12	22
#define DMPAPER_ENV_14	23
#define DMPAPER_CSHEET	24
#define DMPAPER_DSHEET	25
#define DMPAPER_ESHEET	26
#define DMPAPER_ENV_DL	27
#define DMPAPER_ENV_C5	28
#define DMPAPER_ENV_C3	29
#define DMPAPER_ENV_C4	30
#define DMPAPER_ENV_C6	31
#define DMPAPER_ENV_C65	32
#define DMPAPER_ENV_B4	33
#define DMPAPER_ENV_B5	34
#define DMPAPER_ENV_B6	35
#define DMPAPER_ENV_ITALY	36
#define DMPAPER_ENV_MONARCH	37
#define DMPAPER_ENV_PERSONAL	38
#define DMPAPER_FANFOLD_US	39
#define DMPAPER_FANFOLD_STD_GERMAN	40
#define DMPAPER_FANFOLD_LGL_GERMAN	41
#define DMPAPER_ISO_B4	42
#define DMPAPER_JAPANESE_POSTCARD	43
#define DMPAPER_9X11	44
#define DMPAPER_10X11	45
#define DMPAPER_15X11	46
#define DMPAPER_ENV_INVITE	47
#define DMPAPER_RESERVED_48	48
#define DMPAPER_RESERVED_49	49
#define DMPAPER_LETTER_EXTRA	50
#define DMPAPER_LEGAL_EXTRA	51
#define DMPAPER_TABLOID_EXTRA	52
#define DMPAPER_A4_EXTRA	53
#define DMPAPER_LETTER_TRANSVERSE	54
#define DMPAPER_A4_TRANSVERSE	55
#define DMPAPER_LETTER_EXTRA_TRANSVERSE	56
#define DMPAPER_A_PLUS	57
#define DMPAPER_B_PLUS	58
#define DMPAPER_LETTER_PLUS	59
#define DMPAPER_A4_PLUS	60
#define DMPAPER_A5_TRANSVERSE	61
#define DMPAPER_B5_TRANSVERSE	62
#define DMPAPER_A3_EXTRA	63
#define DMPAPER_A5_EXTRA	64
#define DMPAPER_B5_EXTRA	65
#define DMPAPER_A2	66
#define DMPAPER_A3_TRANSVERSE	67
#define DMPAPER_A3_EXTRA_TRANSVERSE	68
#define DMPAPER_LAST	68

#define DMPAPER_USER	256
#define DMBIN_FIRST	1
#define DMBIN_UPPER	1
#define DMBIN_ONLYONE	1
#define DMBIN_LOWER	2
#define DMBIN_MIDDLE	3
#define DMBIN_MANUAL	4
#define DMBIN_ENVELOPE	5
#define DMBIN_ENVMANUAL	6
#define DMBIN_AUTO	7
#define DMBIN_TRACTOR	8
#define DMBIN_SMALLFMT	9
#define DMBIN_LARGEFMT	10
#define DMBIN_LARGECAPACITY	11
#define DMBIN_CASSETTE	14
#define DMBIN_FORMSOURCE	15
#define DMBIN_LAST	15
#define DMBIN_USER	256
#define DMRES_DRAFT	(-1)
#define DMRES_LOW	(-2)
#define DMRES_MEDIUM	(-3)
#define DMRES_HIGH	(-4)
#define DMCOLOR_MONOCHROME	1
#define DMCOLOR_COLOR	2
#define DMDUP_SIMPLEX	1
#define DMDUP_VERTICAL	2
#define DMDUP_HORIZONTAL	3
#define DMTT_BITMAP	1
#define DMTT_DOWNLOAD	2
#define DMTT_SUBDEV	3
#define DMTT_DOWNLOAD_OUTLINE	4
#define DMCOLLATE_FALSE	0
#define DMCOLLATE_TRUE	1
#define DM_SPECVERSION	800
#define DM_GRAYSCALE	1
#define DM_INTERLACED	2
#define DM_UPDATE	1
#define DM_COPY	2
#define DM_PROMPT	4
#define DM_MODIFY	8
#define DM_IN_BUFFER	DM_MODIFY
#define DM_IN_PROMPT	DM_PROMPT
#define DM_OUT_BUFFER	DM_COPY
#define DM_OUT_DEFAULT	DM_UPDATE
#define DM_ORIENTATION 0x00000001
#define DM_PAPERSIZE 0x00000002
#define DM_PAPERLENGTH 0x00000004
#define DM_PAPERWIDTH 0x00000008
#define DM_SCALE 0x00000010
#define DM_POSITION 0x00000020
#define DM_COPIES 0x00000100
#define DM_DEFAULTSOURCE 0x00000200
#define DM_PRINTQUALITY 0x00000400
#define DM_COLOR 0x00000800
#define DM_DUPLEX 0x00001000
#define DM_YRESOLUTION 0x00002000
#define DM_TTOPTION 0x00004000
#define DM_COLLATE 0x00008000
#define DM_FORMNAME 0x00010000
#define DM_LOGPIXELS 0x00020000
#define DM_BITSPERPEL 0x00040000
#define DM_PELSWIDTH 0x00080000
#define DM_PELSHEIGHT 0x00100000
#define DM_DISPLAYFLAGS 0x00200000
#define DM_DISPLAYFREQUENCY 0x00400000
#define DM_ICMMETHOD 0x00800000
#define DM_ICMINTENT 0x01000000
#define DM_MEDIATYPE 0x02000000
#define DM_DITHERTYPE 0x04000000

#define DMICMMETHOD_NONE	1
#define DMICMMETHOD_SYSTEM	2
#define DMICMMETHOD_DRIVER	3
#define DMICMMETHOD_DEVICE	4
#define DMICMMETHOD_USER	256
#define DMICM_SATURATE	1
#define DMICM_CONTRAST	2
#define DMICM_COLORMETRIC	3
#define DMICM_USER	256
#define DMMEDIA_STANDARD	1
#define DMMEDIA_TRANSPARENCY	2
#define DMMEDIA_GLOSSY	3
#define DMMEDIA_USER	256
#define DMDITHER_NONE	1
#define DMDITHER_COARSE	2
#define DMDITHER_FINE	3
#define DMDITHER_LINEART	4
#define DMDITHER_ERRORDIFFUSION	5
#define DMDITHER_RESERVED6	6
#define DMDITHER_RESERVED7	7
#define DMDITHER_RESERVED8	8
#define DMDITHER_RESERVED9	9
#define DMDITHER_GRAYSCALE	10
#define DMDITHER_USER	256
#define GDI_ERROR 0xFFFFFFFF
#define HGDI_ERROR ((HANDLE)GDI_ERROR)
#define TMPF_FIXED_PITCH 1
#define TMPF_VECTOR 2
#define TMPF_TRUETYPE 4
#define TMPF_DEVICE 8
#define NTM_ITALIC 1
#define NTM_BOLD 32
#define NTM_REGULAR 64
#define TT_POLYGON_TYPE 24
#define TT_PRIM_LINE 1
#define TT_PRIM_QSPLINE 2
#define TT_PRIM_CSPLINE 3 
#define FONTMAPPER_MAX 10
#define ENHMETA_STOCK_OBJECT 0x80000000
#define WGL_FONT_LINES 0
#define WGL_FONT_POLYGONS 1
#define LPD_DOUBLEBUFFER 1
#define LPD_STEREO 2
#define LPD_SUPPORT_GDI 16
#define LPD_SUPPORT_OPENGL 32
#define LPD_SHARE_DEPTH 64
#define LPD_SHARE_STENCIL 128
#define LPD_SHARE_ACCUM 256
#define LPD_SWAP_EXCHANGE 512
#define LPD_SWAP_COPY 1024
#define LPD_TRANSPARENT 4096
#define LPD_TYPE_RGBA 0
#define LPD_TYPE_COLORINDEX 1
#define WGL_SWAP_MAIN_PLANE 1
#define WGL_SWAP_OVERLAY1 2
#define WGL_SWAP_OVERLAY2 4
#define WGL_SWAP_OVERLAY3 8
#define WGL_SWAP_OVERLAY4 16
#define WGL_SWAP_OVERLAY5 32
#define WGL_SWAP_OVERLAY6 64
#define WGL_SWAP_OVERLAY7 128
#define WGL_SWAP_OVERLAY8 256
#define WGL_SWAP_OVERLAY9 512
#define WGL_SWAP_OVERLAY10 1024
#define WGL_SWAP_OVERLAY11 2048
#define WGL_SWAP_OVERLAY12 4096
#define WGL_SWAP_OVERLAY13 8192
#define WGL_SWAP_OVERLAY14 16384
#define WGL_SWAP_OVERLAY15 32768
#define WGL_SWAP_UNDERLAY1 65536
#define WGL_SWAP_UNDERLAY2 0x20000
#define WGL_SWAP_UNDERLAY3 0x40000
#define WGL_SWAP_UNDERLAY4 0x80000
#define WGL_SWAP_UNDERLAY5 0x100000
#define WGL_SWAP_UNDERLAY6 0x200000
#define WGL_SWAP_UNDERLAY7 0x400000
#define WGL_SWAP_UNDERLAY8 0x800000
#define WGL_SWAP_UNDERLAY9 0x1000000
#define WGL_SWAP_UNDERLAY10 0x2000000
#define WGL_SWAP_UNDERLAY11 0x4000000
#define WGL_SWAP_UNDERLAY12 0x8000000
#define WGL_SWAP_UNDERLAY13 0x10000000
#define WGL_SWAP_UNDERLAY14 0x20000000
#define WGL_SWAP_UNDERLAY15 0x40000000
#define AC_SRC_OVER		0x00
#define AC_SRC_ALPHA		0x01
#define AC_SRC_NO_PREMULT_ALPHA	0x01
#define AC_SRC_NO_ALPHA		0x02
#define AC_DST_NO_PREMULT_ALPHA	0x10
#define AC_DST_NO_ALPHA		0x20
#define LAYOUT_RTL 1
#define LAYOUT_BITMAPORIENTATIONPRESERVED 8
#define CS_ENABLE           0x00000001
#define CS_DISABLE          0x00000002
#define CS_DELETE_TRANSFORM 0x00000003

#define DISPLAY_DEVICE_ATTACHED_TO_DESKTOP 0x00000001
#define DISPLAY_DEVICE_MULTI_DRIVER        0x00000002
#define DISPLAY_DEVICE_PRIMARY_DEVICE      0x00000004
#define DISPLAY_DEVICE_MIRRORING_DRIVER    0x00000008
#define DISPLAY_DEVICE_VGA_COMPATIBLE      0x00000010
#define DISPLAY_DEVICE_REMOVABLE           0x00000020
#define DISPLAY_DEVICE_MODESPRUNED         0x08000000

#endif
#endif
static char *WmfStrDup(const char *sString)
{
	if ( NULL == sString )
		return NULL;

	char *sCopy = (char*)malloc( strlen(sString) + 1 );
	if ( NULL == sCopy )
		return NULL;

	strcpy( sCopy, sString );

	return sCopy;
}
static TWmfCoord WmfCoord(unsigned short ushX, unsigned short ushY)
{	
	TWmfCoord oPoint;

	oPoint.unX = UShort_2_Long( ushX );
	oPoint.unY = UShort_2_Long( ushY );

	return oPoint;
}

static void PolyPoly_To_PolyLine(TWmfPolyPoly *pPolyPoly, TWmfPolyLine *pPolyLine, unsigned short ushPolyIndex)
{	
	unsigned short ushCount = pPolyPoly->pCount[ushPolyIndex];

	if ( NULL == pPolyPoly->ppPoints ) 
		return;

	if ( ( NULL == pPolyPoly->ppPoints[ushPolyIndex] ) || ( pPolyPoly->pCount[ushPolyIndex] < 3 ) ) 
		return;

	// Избавляемся от лишних точек
	while ( ( pPolyPoly->ppPoints[ushPolyIndex][0].fX == pPolyPoly->ppPoints[ushPolyIndex][ushCount - 1].fX ) && ( pPolyPoly->ppPoints[ushPolyIndex][0].fY == pPolyPoly->ppPoints[ushPolyIndex][ushCount - 1].fY ) )
	{
		ushCount--;
		if ( ushCount < 3 ) 
			break;
	}
	if ( ushCount < 3 ) 
		return;

	// Определяем последний ли полигон
	bool bLast = false;
	if ( ushPolyIndex < ( pPolyPoly->ushPolyCount - 1 ) )
	{	
		if ( ( NULL == pPolyPoly->ppPoints[ushPolyIndex + 1] == 0 ) || ( pPolyPoly->pCount[ushPolyIndex + 1] < 3 ) )
		{	
			bLast = 1;
		}
	}
	else
	{	
		bLast = 1;
	}

	if ( bLast )
	{	
		for ( unsigned short ushPointIndex = 0; ushPointIndex < ushCount; ushPointIndex++ )
		{	
			pPolyLine->pPoints[pPolyLine->ushCount].fX = pPolyPoly->ppPoints[ushPolyIndex][ushPointIndex].fX;
			pPolyLine->pPoints[pPolyLine->ushCount].fY = pPolyPoly->ppPoints[ushPolyIndex][ushPointIndex].fY;
			pPolyLine->ushCount++;
		}
		pPolyLine->pPoints[pPolyLine->ushCount].fX = pPolyPoly->ppPoints[ushPolyIndex][0].fX;
		pPolyLine->pPoints[pPolyLine->ushCount].fY = pPolyPoly->ppPoints[ushPolyIndex][0].fY;
		pPolyLine->ushCount++;

		return;
	}

	// Ищем в данном полигоне точку ближающую к нулевой точке следующего полигона (т.к. этот полигон не последний, то все впорядке)
	unsigned short ushMinIndex = 0;
	double dMinR2;
	for ( unsigned short ushPointIndex = 0; ushPointIndex < ushCount; ushPointIndex++ )
	{	
		double dX2 = (double) pPolyPoly->ppPoints[ushPolyIndex][ushPointIndex].fX - (double) pPolyPoly->ppPoints[ushPolyIndex+1][0].fX;
		dX2 *= dX2;
		double dY2 = (double) pPolyPoly->ppPoints[ushPolyIndex][ushPointIndex].fY - (double) pPolyPoly->ppPoints[ushPolyIndex+1][0].fY;
		dY2 *= dY2;
		double dR2 = dX2 + dY2;
		if ( 0 == ushPointIndex )
		{	
			dMinR2 = dR2;
		}
		else if ( dR2 < dMinR2 )
		{	
			dMinR2 = dR2;
			ushMinIndex = ushPointIndex;
		}
	}

	for ( unsigned short ushPointIndex = 0; ushPointIndex <= ushMinIndex; ushPointIndex++ )
	{	
		pPolyLine->pPoints[pPolyLine->ushCount].fX = pPolyPoly->ppPoints[ushPolyIndex][ushPointIndex].fX;
		pPolyLine->pPoints[pPolyLine->ushCount].fY = pPolyPoly->ppPoints[ushPolyIndex][ushPointIndex].fY;
		pPolyLine->ushCount++;
	}

	PolyPoly_To_PolyLine( pPolyPoly, pPolyLine, (unsigned short)(ushPolyIndex + 1) );

	for ( unsigned short ushPointIndex = ushMinIndex; ushPointIndex < ushCount; ushPointIndex++ )
	{	
		pPolyLine->pPoints[pPolyLine->ushCount].fX = pPolyPoly->ppPoints[ushPolyIndex][ushPointIndex].fX;
		pPolyLine->pPoints[pPolyLine->ushCount].fY = pPolyPoly->ppPoints[ushPolyIndex][ushPointIndex].fY;
		pPolyLine->ushCount++;
	}
	pPolyLine->pPoints[pPolyLine->ushCount].fX = pPolyPoly->ppPoints[ushPolyIndex][0].fX;
	pPolyLine->pPoints[pPolyLine->ushCount].fY = pPolyPoly->ppPoints[ushPolyIndex][0].fY;
	pPolyLine->ushCount++;
}

static BOOL WmfOpenTempFile(CString *pwsName, FILE **ppFile, wchar_t *wsMode, wchar_t *wsExt, wchar_t *wsFolder) 
{
	CStringW wsTemp, wsFileName;
	FILE *pTempFile;
#ifdef _WIN32
	wchar_t *wsTempDir;
	if ( ( wsTempDir = _wgetenv( _T("TEMP") ) ) && ( wsFolder == NULL ) ) 
	{
		wsTemp = CString( wsTempDir );
#else
    char *wsTempDirA;
    if ( ( wsTempDirA = getenv( "TEMP" ) ) && ( wsFolder == NULL ) )
	{
        std::wstring wsTempDir = UTF8_TO_U( wsTempDirA );
        wsTemp = wsTempDir.c_str();
#endif
		wsTemp.Append( L"\\" );
	} 
	else if( wsFolder != NULL )
	{
		wsTemp = CString( wsFolder );
		wsTemp.Append( L"\\" );
	}
	else
	{ 
		wsTemp = L"";
	}
	wsTemp.Append( L"x" );
	int nTime = (int)time(NULL);
	for (int nIndex = 0; nIndex < 1000; ++nIndex ) 
	{
		wsFileName = wsTemp;
        wsFileName.AppendFormat( L"%d", nTime + nIndex );
		
		if ( wsExt ) 
		{
			wsFileName.Append( wsExt );
		}
#ifdef _WIN32
		if ( !( pTempFile = _wfopen( wsFileName.GetBuffer(), L"r" ) ) ) 
		{
			if ( !( pTempFile = _wfopen( wsFileName.GetBuffer(), wsMode ) ) ) 
#else
		std::string sFileName = U_TO_UTF8(wsFileName);
        if ( !( pTempFile = fopen( sFileName.c_str(), "r" ) ) )
		{
			std::string sMode = U_TO_UTF8(wsMode);
            if ( !( pTempFile = fopen( sFileName.c_str(), sMode.c_str() ) ) )
#endif
			{
				return FALSE;
			}
			*pwsName = wsFileName;
			*ppFile = pTempFile;
			return TRUE;
		}

		fclose( pTempFile );
	}

	return FALSE;
}


#endif /* _WMF_UTILS_H */
