// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/speech/v1p1beta1/cloud_speech.proto
// Original file comments:
// Copyright 2018 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_google_2fcloud_2fspeech_2fv1p1beta1_2fcloud_5fspeech_2eproto__INCLUDED
#define GRPC_google_2fcloud_2fspeech_2fv1p1beta1_2fcloud_5fspeech_2eproto__INCLUDED

#include "google/cloud/speech/v1p1beta1/cloud_speech.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace google {
namespace cloud {
namespace speech {
namespace v1p1beta1 {

// Service that implements Google Cloud Speech API.
class Speech final {
 public:
  static constexpr char const* service_full_name() {
    return "google.cloud.speech.v1p1beta1.Speech";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Performs synchronous speech recognition: receive results after all audio
    // has been sent and processed.
    virtual ::grpc::Status Recognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::google::cloud::speech::v1p1beta1::RecognizeResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::speech::v1p1beta1::RecognizeResponse>> AsyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::speech::v1p1beta1::RecognizeResponse>>(AsyncRecognizeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::speech::v1p1beta1::RecognizeResponse>> PrepareAsyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::speech::v1p1beta1::RecognizeResponse>>(PrepareAsyncRecognizeRaw(context, request, cq));
    }
    // Performs asynchronous speech recognition: receive results via the
    // google.longrunning.Operations interface. Returns either an
    // `Operation.error` or an `Operation.response` which contains
    // a `LongRunningRecognizeResponse` message.
    virtual ::grpc::Status LongRunningRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::google::longrunning::Operation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>> AsyncLongRunningRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>>(AsyncLongRunningRecognizeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>> PrepareAsyncLongRunningRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>>(PrepareAsyncLongRunningRecognizeRaw(context, request, cq));
    }
    // Performs bidirectional streaming speech recognition: receive results while
    // sending audio. This method is only available via the gRPC API (not REST).
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>> StreamingRecognize(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>>(StreamingRecognizeRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>> AsyncStreamingRecognize(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>>(AsyncStreamingRecognizeRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>> PrepareAsyncStreamingRecognize(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>>(PrepareAsyncStreamingRecognizeRaw(context, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::speech::v1p1beta1::RecognizeResponse>* AsyncRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::speech::v1p1beta1::RecognizeResponse>* PrepareAsyncRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>* AsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>* PrepareAsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>* StreamingRecognizeRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>* AsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>* PrepareAsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Recognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::google::cloud::speech::v1p1beta1::RecognizeResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1p1beta1::RecognizeResponse>> AsyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1p1beta1::RecognizeResponse>>(AsyncRecognizeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1p1beta1::RecognizeResponse>> PrepareAsyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1p1beta1::RecognizeResponse>>(PrepareAsyncRecognizeRaw(context, request, cq));
    }
    ::grpc::Status LongRunningRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::google::longrunning::Operation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>> AsyncLongRunningRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>>(AsyncLongRunningRecognizeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>> PrepareAsyncLongRunningRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>>(PrepareAsyncLongRunningRecognizeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>> StreamingRecognize(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>>(StreamingRecognizeRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>> AsyncStreamingRecognize(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>>(AsyncStreamingRecognizeRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>> PrepareAsyncStreamingRecognize(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>>(PrepareAsyncStreamingRecognizeRaw(context, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1p1beta1::RecognizeResponse>* AsyncRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1p1beta1::RecognizeResponse>* PrepareAsyncRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* AsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* PrepareAsyncLongRunningRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>* StreamingRecognizeRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>* AsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse>* PrepareAsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Recognize_;
    const ::grpc::internal::RpcMethod rpcmethod_LongRunningRecognize_;
    const ::grpc::internal::RpcMethod rpcmethod_StreamingRecognize_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Performs synchronous speech recognition: receive results after all audio
    // has been sent and processed.
    virtual ::grpc::Status Recognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest* request, ::google::cloud::speech::v1p1beta1::RecognizeResponse* response);
    // Performs asynchronous speech recognition: receive results via the
    // google.longrunning.Operations interface. Returns either an
    // `Operation.error` or an `Operation.response` which contains
    // a `LongRunningRecognizeResponse` message.
    virtual ::grpc::Status LongRunningRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest* request, ::google::longrunning::Operation* response);
    // Performs bidirectional streaming speech recognition: receive results while
    // sending audio. This method is only available via the gRPC API (not REST).
    virtual ::grpc::Status StreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse, ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_Recognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Recognize() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Recognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Recognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest* request, ::google::cloud::speech::v1p1beta1::RecognizeResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRecognize(::grpc::ServerContext* context, ::google::cloud::speech::v1p1beta1::RecognizeRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::speech::v1p1beta1::RecognizeResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_LongRunningRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_LongRunningRecognize() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_LongRunningRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LongRunningRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLongRunningRecognize(::grpc::ServerContext* context, ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::longrunning::Operation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_StreamingRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_StreamingRecognize() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_StreamingRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse, ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse, ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(2, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Recognize<WithAsyncMethod_LongRunningRecognize<WithAsyncMethod_StreamingRecognize<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Recognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Recognize() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Recognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Recognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest* request, ::google::cloud::speech::v1p1beta1::RecognizeResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_LongRunningRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_LongRunningRecognize() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_LongRunningRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LongRunningRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_StreamingRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_StreamingRecognize() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_StreamingRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::cloud::speech::v1p1beta1::StreamingRecognizeResponse, ::google::cloud::speech::v1p1beta1::StreamingRecognizeRequest>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Recognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Recognize() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::cloud::speech::v1p1beta1::RecognizeRequest, ::google::cloud::speech::v1p1beta1::RecognizeResponse>(std::bind(&WithStreamedUnaryMethod_Recognize<BaseClass>::StreamedRecognize, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Recognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Recognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::RecognizeRequest* request, ::google::cloud::speech::v1p1beta1::RecognizeResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedRecognize(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::speech::v1p1beta1::RecognizeRequest,::google::cloud::speech::v1p1beta1::RecognizeResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_LongRunningRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_LongRunningRecognize() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest, ::google::longrunning::Operation>(std::bind(&WithStreamedUnaryMethod_LongRunningRecognize<BaseClass>::StreamedLongRunningRecognize, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_LongRunningRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status LongRunningRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedLongRunningRecognize(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::speech::v1p1beta1::LongRunningRecognizeRequest,::google::longrunning::Operation>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Recognize<WithStreamedUnaryMethod_LongRunningRecognize<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Recognize<WithStreamedUnaryMethod_LongRunningRecognize<Service > > StreamedService;
};

}  // namespace v1p1beta1
}  // namespace speech
}  // namespace cloud
}  // namespace google


#endif  // GRPC_google_2fcloud_2fspeech_2fv1p1beta1_2fcloud_5fspeech_2eproto__INCLUDED
