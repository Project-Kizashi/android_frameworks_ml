// Generated from depthwise_conv2d_float_weights_as_inputs_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::depthwise_conv2d_float_weights_as_inputs_relaxed {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, depthwise_conv2d_float_weights_as_inputs_relaxed) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::depthwise_conv2d_float_weights_as_inputs_relaxed

namespace generated_tests::depthwise_conv2d_float_weights_as_inputs_relaxed {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_float_weights_as_inputs_relaxed_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_float_weights_as_inputs_relaxed

namespace generated_tests::depthwise_conv2d_float_weights_as_inputs_relaxed {

void CreateModel_all_inputs_as_internal(Model *model);
bool is_ignored_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

TEST_F(GeneratedTests, depthwise_conv2d_float_weights_as_inputs_relaxed_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal,
            is_ignored_all_inputs_as_internal,
            get_examples_all_inputs_as_internal());
}

} // namespace generated_tests::depthwise_conv2d_float_weights_as_inputs_relaxed

namespace generated_tests::depthwise_conv2d_float_weights_as_inputs_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_float_weights_as_inputs_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::depthwise_conv2d_float_weights_as_inputs_relaxed
