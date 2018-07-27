// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/ml/v1/prediction_service.proto

#include "google/cloud/ml/v1/prediction_service.pb.h"
#include "google/cloud/ml/v1/prediction_service.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace cloud {
namespace ml {
namespace v1 {

static const char* OnlinePredictionService_method_names[] = {
  "/google.cloud.ml.v1.OnlinePredictionService/Predict",
};

std::unique_ptr< OnlinePredictionService::Stub> OnlinePredictionService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< OnlinePredictionService::Stub> stub(new OnlinePredictionService::Stub(channel));
  return stub;
}

OnlinePredictionService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Predict_(OnlinePredictionService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status OnlinePredictionService::Stub::Predict(::grpc::ClientContext* context, const ::google::cloud::ml::v1::PredictRequest& request, ::google::api::HttpBody* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Predict_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::api::HttpBody>* OnlinePredictionService::Stub::AsyncPredictRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1::PredictRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::api::HttpBody>::Create(channel_.get(), cq, rpcmethod_Predict_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::api::HttpBody>* OnlinePredictionService::Stub::PrepareAsyncPredictRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1::PredictRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::api::HttpBody>::Create(channel_.get(), cq, rpcmethod_Predict_, context, request, false);
}

OnlinePredictionService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      OnlinePredictionService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< OnlinePredictionService::Service, ::google::cloud::ml::v1::PredictRequest, ::google::api::HttpBody>(
          std::mem_fn(&OnlinePredictionService::Service::Predict), this)));
}

OnlinePredictionService::Service::~Service() {
}

::grpc::Status OnlinePredictionService::Service::Predict(::grpc::ServerContext* context, const ::google::cloud::ml::v1::PredictRequest* request, ::google::api::HttpBody* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace ml
}  // namespace v1

