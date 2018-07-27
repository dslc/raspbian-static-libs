// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/speech/v1p1beta1/cloud_speech.proto

#include "google/cloud/speech/v1p1beta1/cloud_speech.pb.h"
#include "google/cloud/speech/v1p1beta1/cloud_speech.grpc.pb.h"

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
namespace speech {
namespace v1p1beta1 {

static const char* Speech_method_names[] = {
  "/google.cloud.speech.v1p1beta1.Speech/Recognize",
  "/google.cloud.speech.v1p1beta1.Speech/LongRunningRecognize",
  "/google.cloud.speech.v1p1beta1.Speech/StreamingRecognize",
};

std::unique_ptr< Speech::Stub> Speech::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Speech::Stub> stub(new Speech::Stub(channel));
  return stub;
}

Speech::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Recognize_(Speech_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_LongRunningRecognize_(Speech_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StreamingRecognize_(Speech_method_names[2], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::Status Speech::Stub::Recognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::google::cloud::speech::v1p1beta1::RecognizeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Recognize_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1p1beta1::RecognizeResponse>* Speech::Stub::AsyncRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::speech::v1p1beta1::RecognizeResponse>::Create(channel_.get(), cq, rpcmethod_Recognize_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1p1beta1::RecognizeResponse>* Speech::Stub::PrepareAsyncRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::speech::v1p1beta1::RecognizeResponse>::Create(channel_.get(), cq, rpcmethod_Recognize_, context, request, false);
}

::grpc::Status Speech::Stub::LongRunningRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_LongRunningRecognize_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Speech::Stub::AsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_LongRunningRecognize_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Speech::Stub::PrepareAsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_LongRunningRecognize_, context, request, false);
}

::grpc::ClientReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>* Speech::Stub::StreamingRecognizeRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>::Create(channel_.get(), rpcmethod_StreamingRecognize_, context);
}

::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>* Speech::Stub::AsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>::Create(channel_.get(), cq, rpcmethod_StreamingRecognize_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>* Speech::Stub::PrepareAsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>::Create(channel_.get(), cq, rpcmethod_StreamingRecognize_, context, false, nullptr);
}

Speech::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Speech_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Speech::Service, ::google::cloud::speech::v1p1beta1::RecognizeRequest, ::google::cloud::speech::v1p1beta1::RecognizeResponse>(
          std::mem_fn(&Speech::Service::Recognize), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Speech_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Speech::Service, ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest, ::google::longrunning::Operation>(
          std::mem_fn(&Speech::Service::LongRunningRecognize), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Speech_method_names[2],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< Speech::Service, ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>(
          std::mem_fn(&Speech::Service::StreamingRecognize), this)));
}

Speech::Service::~Service() {
}

::grpc::Status Speech::Service::Recognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest* request, ::google::cloud::speech::v1p1beta1::RecognizeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Speech::Service::LongRunningRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Speech::Service::StreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse, ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace speech
}  // namespace v1p1beta1

