// Generated from reduce_any.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::reduce_any {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::reduce_any

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, reduce_any) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::reduce_any::get_examples());
}

TEST_F(ValidationTest, reduce_any) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_any::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any

namespace generated_tests::reduce_any {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::reduce_any

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, reduce_any_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::reduce_any::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, reduce_any_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_any::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any

namespace generated_tests::reduce_any {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::reduce_any

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, reduce_any_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::reduce_any::get_examples_2());
}

TEST_F(ValidationTest, reduce_any_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_any::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any

namespace generated_tests::reduce_any {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::reduce_any

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, reduce_any_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::reduce_any::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, reduce_any_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_any::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any

namespace generated_tests::reduce_any {

std::vector<::test_helper::MixedTypedExample>& get_examples_3();

} // namespace generated_tests::reduce_any

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, reduce_any_3) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::reduce_any::get_examples_3());
}

TEST_F(ValidationTest, reduce_any_3) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_any::get_examples_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any

namespace generated_tests::reduce_any {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_3();

} // namespace generated_tests::reduce_any

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, reduce_any_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::reduce_any::get_examples_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, reduce_any_dynamic_output_shape_3) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_any::get_examples_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any
