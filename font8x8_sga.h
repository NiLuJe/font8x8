/**
 * 8x8 monochrome bitmap fonts for rendering
 * Author: Daniel Hepper <daniel@hepper.net>
 *
 * License: Public Domain
 *
 * Based on:
 * // Summary: font8x8.h
 * // 8x8 monochrome bitmap fonts for rendering
 * //
 * // Author:
 * //     Marcel Sondaar
 * //     International Business Machines (public domain VGA fonts)
 * //
 * // License:
 * //     Public Domain
 *
 * Fetched from: http://dimensionalrift.homelinux.net/combuster/mos3/?p=viewsource&file=/modules/gfx/font8_8.asm
 **/

#pragma once

static const unsigned char font8x8_sga[26][8] = {
    { 0x00, 0x00, 0x38, 0x66, 0x06, 0x06, 0x07, 0x00},   // U+E541 (SGA A)
    { 0x00, 0x00, 0x0C, 0x0C, 0x18, 0x30, 0x7F, 0x00},   // U+E542 (SGA B)
    { 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x30, 0x30, 0x00},   // U+E543 (SGA C)
    { 0x00, 0x00, 0x7F, 0x00, 0x03, 0x1C, 0x60, 0x00},   // U+E544 (SGA D)
    { 0x00, 0x00, 0x63, 0x03, 0x03, 0x03, 0x7F, 0x00},   // U+E545 (SGA E)
    { 0x00, 0x00, 0x00, 0xFF, 0x00, 0xDB, 0x00, 0x00},   // U+E546 (SGA F)
    { 0x00, 0x00, 0x30, 0x30, 0x3E, 0x30, 0x30, 0x00},   // U+E547 (SGA G)
    { 0x00, 0x00, 0x7E, 0x00, 0x7E, 0x18, 0x18, 0x00},   // U+E548 (SGA H)
    { 0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00},   // U+E549 (SGA I)
    { 0x00, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00},   // U+E54A (SGA J)
    { 0x00, 0x00, 0x18, 0x18, 0x5A, 0x18, 0x18, 0x00},   // U+E54B (SGA K)
    { 0x00, 0x00, 0x03, 0x33, 0x03, 0x33, 0x03, 0x00},   // U+E54C (SGA L)
    { 0x00, 0x00, 0x63, 0x60, 0x60, 0x60, 0x7F, 0x00},   // U+E54D (SGA M)
    { 0x00, 0x00, 0x66, 0x60, 0x30, 0x18, 0x0C, 0x00},   // U+E54E (SGA N)
    { 0x00, 0x00, 0x3C, 0x60, 0x30, 0x18, 0x0C, 0x00},   // U+E54F (SGA O)
    { 0x00, 0x00, 0x66, 0x60, 0x66, 0x06, 0x66, 0x00},   // U+E550 (SGA P)
    { 0x00, 0x00, 0x18, 0x00, 0x7E, 0x60, 0x7E, 0x00},   // U+E551 (SGA Q)
    { 0x00, 0x00, 0x00, 0x66, 0x00, 0x66, 0x00, 0x00},   // U+E552 (SGA R)
    { 0x00, 0x00, 0x0C, 0x0C, 0x3C, 0x30, 0x30, 0x00},   // U+E553 (SGA S)
    { 0x00, 0x00, 0x3C, 0x30, 0x30, 0x00, 0x30, 0x00},   // U+E554 (SGA T)
    { 0x00, 0x00, 0x00, 0x36, 0x00, 0x7F, 0x00, 0x00},   // U+E555 (SGA U)
    { 0x00, 0x00, 0x18, 0x18, 0x7E, 0x00, 0x7E, 0x00},   // U+E556 (SGA V)
    { 0x00, 0x00, 0x00, 0x18, 0x00, 0x66, 0x00, 0x00},   // U+E557 (SGA W)
    { 0x00, 0x00, 0x66, 0x30, 0x18, 0x0C, 0x06, 0x00},   // U+E558 (SGA X)
    { 0x00, 0x00, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00},   // U+E559 (SGA Y)
    { 0x00, 0x00, 0x18, 0x3C, 0x66, 0x66, 0x66, 0x00}    // U+E55A (SGA Z)
};
