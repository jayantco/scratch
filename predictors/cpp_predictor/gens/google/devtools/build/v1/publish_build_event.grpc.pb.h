// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/devtools/build/v1/publish_build_event.proto
// Original file comments:
// Copyright 2017 Google Inc.
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
#ifndef GRPC_google_2fdevtools_2fbuild_2fv1_2fpublish_5fbuild_5fevent_2eproto__INCLUDED
#define GRPC_google_2fdevtools_2fbuild_2fv1_2fpublish_5fbuild_5fevent_2eproto__INCLUDED

#include "google/devtools/build/v1/publish_build_event.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace google {
namespace devtools {
namespace build {
namespace v1 {

// A service for publishing BuildEvents. BuildEvents are generated by Build
// Systems to record actions taken during a Build. Events occur in streams,
// are identified by a StreamId, and ordered by sequence number in a stream.
//
// A Build may contain several streams of BuildEvents, depending on the systems
// that are involved in the Build. Some BuildEvents are used to declare the
// beginning and end of major portions of a Build; these are called
// LifecycleEvents, and are used (for example) to indicate the beginning or end
// of a Build, and the beginning or end of an Invocation attempt (there can be
// more than 1 Invocation in a Build if, for example, a failure occurs somewhere
// and it needs to be retried).
//
// Other, build-tool events represent actions taken by the Build tool, such as
// target objects produced via compilation, tests run, et cetera. There could be
// more than one build tool stream for an invocation attempt of a build.
class PublishBuildEvent final {
 public:
  static constexpr char const* service_full_name() {
    return "google.devtools.build.v1.PublishBuildEvent";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Publish a build event stating the new state of a build (typically from the
    // build queue). If the event is a BuildEnqueued event, also register the new
    // build request ID and its build type to BES.
    //
    // The backend will persist the event and deliver it to registered frontend
    // jobs immediately without batching.
    //
    // The commit status of the request is reported by the RPC's util_status()
    // function. The error code is the canoncial error code defined in
    // //util/task/codes.proto.
    virtual ::grpc::Status PublishLifecycleEvent(::grpc::ClientContext* context, const ::google::devtools::build::v1::PublishLifecycleEventRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncPublishLifecycleEvent(::grpc::ClientContext* context, const ::google::devtools::build::v1::PublishLifecycleEventRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncPublishLifecycleEventRaw(context, request, cq));
    }
    // Publish build tool events belonging to the same stream to a backend job
    // using bidirectional streaming.
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>> PublishBuildToolEventStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>>(PublishBuildToolEventStreamRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>> AsyncPublishBuildToolEventStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>>(AsyncPublishBuildToolEventStreamRaw(context, cq, tag));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncPublishLifecycleEventRaw(::grpc::ClientContext* context, const ::google::devtools::build::v1::PublishLifecycleEventRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>* PublishBuildToolEventStreamRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>* AsyncPublishBuildToolEventStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status PublishLifecycleEvent(::grpc::ClientContext* context, const ::google::devtools::build::v1::PublishLifecycleEventRequest& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncPublishLifecycleEvent(::grpc::ClientContext* context, const ::google::devtools::build::v1::PublishLifecycleEventRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncPublishLifecycleEventRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>> PublishBuildToolEventStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>>(PublishBuildToolEventStreamRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>> AsyncPublishBuildToolEventStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>>(AsyncPublishBuildToolEventStreamRaw(context, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncPublishLifecycleEventRaw(::grpc::ClientContext* context, const ::google::devtools::build::v1::PublishLifecycleEventRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReaderWriter< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>* PublishBuildToolEventStreamRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::google::devtools::build::v1::OrderedBuildEvent, ::google::devtools::build::v1::PublishBuildToolEventStreamResponse>* AsyncPublishBuildToolEventStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    const ::grpc::RpcMethod rpcmethod_PublishLifecycleEvent_;
    const ::grpc::RpcMethod rpcmethod_PublishBuildToolEventStream_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Publish a build event stating the new state of a build (typically from the
    // build queue). If the event is a BuildEnqueued event, also register the new
    // build request ID and its build type to BES.
    //
    // The backend will persist the event and deliver it to registered frontend
    // jobs immediately without batching.
    //
    // The commit status of the request is reported by the RPC's util_status()
    // function. The error code is the canoncial error code defined in
    // //util/task/codes.proto.
    virtual ::grpc::Status PublishLifecycleEvent(::grpc::ServerContext* context, const ::google::devtools::build::v1::PublishLifecycleEventRequest* request, ::google::protobuf::Empty* response);
    // Publish build tool events belonging to the same stream to a backend job
    // using bidirectional streaming.
    virtual ::grpc::Status PublishBuildToolEventStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::devtools::build::v1::PublishBuildToolEventStreamResponse, ::google::devtools::build::v1::OrderedBuildEvent>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_PublishLifecycleEvent : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_PublishLifecycleEvent() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_PublishLifecycleEvent() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PublishLifecycleEvent(::grpc::ServerContext* context, const ::google::devtools::build::v1::PublishLifecycleEventRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPublishLifecycleEvent(::grpc::ServerContext* context, ::google::devtools::build::v1::PublishLifecycleEventRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_PublishBuildToolEventStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_PublishBuildToolEventStream() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_PublishBuildToolEventStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PublishBuildToolEventStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::devtools::build::v1::PublishBuildToolEventStreamResponse, ::google::devtools::build::v1::OrderedBuildEvent>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPublishBuildToolEventStream(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::google::devtools::build::v1::PublishBuildToolEventStreamResponse, ::google::devtools::build::v1::OrderedBuildEvent>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_PublishLifecycleEvent<WithAsyncMethod_PublishBuildToolEventStream<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_PublishLifecycleEvent : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_PublishLifecycleEvent() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_PublishLifecycleEvent() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PublishLifecycleEvent(::grpc::ServerContext* context, const ::google::devtools::build::v1::PublishLifecycleEventRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_PublishBuildToolEventStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_PublishBuildToolEventStream() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_PublishBuildToolEventStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PublishBuildToolEventStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::devtools::build::v1::PublishBuildToolEventStreamResponse, ::google::devtools::build::v1::OrderedBuildEvent>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_PublishLifecycleEvent : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_PublishLifecycleEvent() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::google::devtools::build::v1::PublishLifecycleEventRequest, ::google::protobuf::Empty>(std::bind(&WithStreamedUnaryMethod_PublishLifecycleEvent<BaseClass>::StreamedPublishLifecycleEvent, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_PublishLifecycleEvent() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status PublishLifecycleEvent(::grpc::ServerContext* context, const ::google::devtools::build::v1::PublishLifecycleEventRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPublishLifecycleEvent(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::devtools::build::v1::PublishLifecycleEventRequest,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_PublishLifecycleEvent<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_PublishLifecycleEvent<Service > StreamedService;
};

}  // namespace v1
}  // namespace build
}  // namespace devtools
}  // namespace google


#endif  // GRPC_google_2fdevtools_2fbuild_2fv1_2fpublish_5fbuild_5fevent_2eproto__INCLUDED
