// Generated from concat_float16_3.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::concat_float16_3 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, concat_float16_3) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::concat_float16_3
TEST_AVAILABLE_SINCE(V1_2, concat_float16_3, generated_tests::concat_float16_3::CreateModel)

namespace generated_tests::concat_float16_3 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, concat_float16_3_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::concat_float16_3

