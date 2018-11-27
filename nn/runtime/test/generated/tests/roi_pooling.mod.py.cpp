// clang-format off
// Generated file (from: roi_pooling.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace roi_pooling {
// Generated roi_pooling test
#include "generated/examples/roi_pooling.example.cpp"
// Generated model constructor
#include "generated/models/roi_pooling.model.cpp"
} // namespace roi_pooling

TEST_F(GeneratedTests, roi_pooling_nhwc) {
    execute(roi_pooling::CreateModel_nhwc,
            roi_pooling::is_ignored_nhwc,
            roi_pooling::examples_nhwc);
}

TEST_F(GeneratedTests, roi_pooling_nhwc_relaxed) {
    execute(roi_pooling::CreateModel_nhwc_relaxed,
            roi_pooling::is_ignored_nhwc_relaxed,
            roi_pooling::examples_nhwc_relaxed);
}

TEST_F(GeneratedTests, roi_pooling_nhwc_quant8) {
    execute(roi_pooling::CreateModel_nhwc_quant8,
            roi_pooling::is_ignored_nhwc_quant8,
            roi_pooling::examples_nhwc_quant8);
}

TEST_F(GeneratedTests, roi_pooling_nchw) {
    execute(roi_pooling::CreateModel_nchw,
            roi_pooling::is_ignored_nchw,
            roi_pooling::examples_nchw);
}

TEST_F(GeneratedTests, roi_pooling_nchw_relaxed) {
    execute(roi_pooling::CreateModel_nchw_relaxed,
            roi_pooling::is_ignored_nchw_relaxed,
            roi_pooling::examples_nchw_relaxed);
}

TEST_F(GeneratedTests, roi_pooling_nchw_quant8) {
    execute(roi_pooling::CreateModel_nchw_quant8,
            roi_pooling::is_ignored_nchw_quant8,
            roi_pooling::examples_nchw_quant8);
}

TEST_F(GeneratedTests, roi_pooling_nhwc_2) {
    execute(roi_pooling::CreateModel_nhwc_2,
            roi_pooling::is_ignored_nhwc_2,
            roi_pooling::examples_nhwc_2);
}

TEST_F(GeneratedTests, roi_pooling_nhwc_relaxed_2) {
    execute(roi_pooling::CreateModel_nhwc_relaxed_2,
            roi_pooling::is_ignored_nhwc_relaxed_2,
            roi_pooling::examples_nhwc_relaxed_2);
}

TEST_F(GeneratedTests, roi_pooling_nhwc_quant8_2) {
    execute(roi_pooling::CreateModel_nhwc_quant8_2,
            roi_pooling::is_ignored_nhwc_quant8_2,
            roi_pooling::examples_nhwc_quant8_2);
}

TEST_F(GeneratedTests, roi_pooling_nchw_2) {
    execute(roi_pooling::CreateModel_nchw_2,
            roi_pooling::is_ignored_nchw_2,
            roi_pooling::examples_nchw_2);
}

TEST_F(GeneratedTests, roi_pooling_nchw_relaxed_2) {
    execute(roi_pooling::CreateModel_nchw_relaxed_2,
            roi_pooling::is_ignored_nchw_relaxed_2,
            roi_pooling::examples_nchw_relaxed_2);
}

TEST_F(GeneratedTests, roi_pooling_nchw_quant8_2) {
    execute(roi_pooling::CreateModel_nchw_quant8_2,
            roi_pooling::is_ignored_nchw_quant8_2,
            roi_pooling::examples_nchw_quant8_2);
}
