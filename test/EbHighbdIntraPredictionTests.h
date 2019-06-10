#pragma once
#ifndef EbHighbdIntraPredictionTests_h
#define EbHighbdIntraPredictionTests_h

#include "aom_dsp_rtcd.h"

typedef void(*aom_highbd_dc_top_predictor_func)(uint16_t *dst, ptrdiff_t stride, const uint16_t *above, const uint16_t *left, int32_t bd);

static aom_highbd_dc_top_predictor_func aom_highbd_dc_top_funcptr_array_opt[7] = {
                            aom_highbd_dc_top_predictor_32x8_avx512,
                            aom_highbd_dc_top_predictor_32x16_avx512,
                            aom_highbd_dc_top_predictor_32x32_avx512,
                            aom_highbd_dc_top_predictor_32x64_avx512,
                            aom_highbd_dc_top_predictor_64x16_avx512,
                            aom_highbd_dc_top_predictor_64x32_avx512,
                            aom_highbd_dc_top_predictor_64x64_avx512 };

static aom_highbd_dc_top_predictor_func aom_highbd_dc_top_funcptr_array_base[7] = {
                            aom_highbd_dc_top_predictor_32x8_avx2,
                            aom_highbd_dc_top_predictor_32x16_avx2,
                            aom_highbd_dc_top_predictor_32x32_avx2,
                            aom_highbd_dc_top_predictor_32x64_avx2,
                            aom_highbd_dc_top_predictor_64x16_avx2,
                            aom_highbd_dc_top_predictor_64x32_avx2,
                            aom_highbd_dc_top_predictor_64x64_avx2 };

static aom_highbd_dc_top_predictor_func aom_highbd_dc_top_funcptr_array_naive[7] = {
                            aom_highbd_dc_top_predictor_32x8_c,
                            aom_highbd_dc_top_predictor_32x16_c,
                            aom_highbd_dc_top_predictor_32x32_c,
                            aom_highbd_dc_top_predictor_32x64_c,
                            aom_highbd_dc_top_predictor_64x16_c,
                            aom_highbd_dc_top_predictor_64x32_c,
                            aom_highbd_dc_top_predictor_64x64_c};

typedef void(*aom_highbd_dc_left_predictor_func)(uint16_t *dst, ptrdiff_t stride, const uint16_t *above, const uint16_t *left, int32_t bd);

static aom_highbd_dc_left_predictor_func aom_highbd_dc_left_funcptr_array_opt[7] = {
                            aom_highbd_dc_left_predictor_32x8_avx512,
                            aom_highbd_dc_left_predictor_32x16_avx512,
                            aom_highbd_dc_left_predictor_32x32_avx512,
                            aom_highbd_dc_left_predictor_32x64_avx512,
                            aom_highbd_dc_left_predictor_64x16_avx512,
                            aom_highbd_dc_left_predictor_64x32_avx512,
                            aom_highbd_dc_left_predictor_64x64_avx512 };

static aom_highbd_dc_left_predictor_func aom_highbd_dc_left_funcptr_array_base[7] = {
                            aom_highbd_dc_left_predictor_32x8_avx2,
                            aom_highbd_dc_left_predictor_32x16_avx2,
                            aom_highbd_dc_left_predictor_32x32_avx2,
                            aom_highbd_dc_left_predictor_32x64_avx2,
                            aom_highbd_dc_left_predictor_64x16_avx2,
                            aom_highbd_dc_left_predictor_64x32_avx2,
                            aom_highbd_dc_left_predictor_64x64_avx2 };

static aom_highbd_dc_left_predictor_func aom_highbd_dc_left_funcptr_array_naive[7] = {
                            aom_highbd_dc_left_predictor_32x8_c,
                            aom_highbd_dc_left_predictor_32x16_c,
                            aom_highbd_dc_left_predictor_32x32_c,
                            aom_highbd_dc_left_predictor_32x64_c,
                            aom_highbd_dc_left_predictor_64x16_c,
                            aom_highbd_dc_left_predictor_64x32_c,
                            aom_highbd_dc_left_predictor_64x64_c };


typedef void(*aom_highbd_dc_predictor_func)(uint16_t *dst, ptrdiff_t stride, const uint16_t *above, const uint16_t *left, int32_t bd);

static aom_highbd_dc_predictor_func aom_highbd_dc_pred_funcptr_array_opt[7] = {
                            aom_highbd_dc_predictor_32x8_avx512,
                            aom_highbd_dc_predictor_32x16_avx512,
                            aom_highbd_dc_predictor_32x32_avx512,
                            aom_highbd_dc_predictor_32x64_avx512,
                            aom_highbd_dc_predictor_64x16_avx512,
                            aom_highbd_dc_predictor_64x32_avx512,
                            aom_highbd_dc_predictor_64x64_avx512 };

static aom_highbd_dc_predictor_func aom_highbd_dc_pred_funcptr_array_base[7] = {
                            aom_highbd_dc_predictor_32x8_avx2,
                            aom_highbd_dc_predictor_32x16_avx2,
                            aom_highbd_dc_predictor_32x32_avx2,
                            aom_highbd_dc_predictor_32x64_avx2,
                            aom_highbd_dc_predictor_64x16_avx2,
                            aom_highbd_dc_predictor_64x32_avx2,
                            aom_highbd_dc_predictor_64x64_avx2 };

static aom_highbd_dc_predictor_func aom_highbd_dc_pred_funcptr_array_naive[7] = {
                            aom_highbd_dc_predictor_32x8_c,
                            aom_highbd_dc_predictor_32x16_c,
                            aom_highbd_dc_predictor_32x32_c,
                            aom_highbd_dc_predictor_32x64_c,
                            aom_highbd_dc_predictor_64x16_c,
                            aom_highbd_dc_predictor_64x32_c,
                            aom_highbd_dc_predictor_64x64_c };
#endif
