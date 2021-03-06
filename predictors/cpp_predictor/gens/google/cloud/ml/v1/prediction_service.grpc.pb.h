// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/ml/v1/prediction_service.proto
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
#ifndef GRPC_google_2fcloud_2fml_2fv1_2fprediction_5fservice_2eproto__INCLUDED
#define GRPC_google_2fcloud_2fml_2fv1_2fprediction_5fservice_2eproto__INCLUDED

#include "google/cloud/ml/v1/prediction_service.pb.h"

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
namespace cloud {
namespace ml {
namespace v1 {

// Copyright 2017 Google Inc. All Rights Reserved.
//
// Proto file for the Google Cloud Machine Learning Engine.
// Describes the online prediction service.
//
// The Prediction API, which serves predictions for models managed by
// ModelService.
class OnlinePredictionService final {
 public:
  static constexpr char const* service_full_name() {
    return "google.cloud.ml.v1.OnlinePredictionService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Performs prediction on the data in the request.
    //
    // **** REMOVE FROM GENERATED DOCUMENTATION
    virtual ::grpc::Status Predict(::grpc::ClientContext* context, const ::google::cloud::ml::v1::PredictRequest& request, ::google::api::HttpBody* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::api::HttpBody>> AsyncPredict(::grpc::ClientContext* context, const ::google::cloud::ml::v1::PredictRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::api::HttpBody>>(AsyncPredictRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::api::HttpBody>* AsyncPredictRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1::PredictRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Predict(::grpc::ClientContext* context, const ::google::cloud::ml::v1::PredictRequest& request, ::google::api::HttpBody* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::api::HttpBody>> AsyncPredict(::grpc::ClientContext* context, const ::google::cloud::ml::v1::PredictRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::api::HttpBody>>(AsyncPredictRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::api::HttpBody>* AsyncPredictRaw(::grpc::ClientContext* context, const ::google::cloud::ml::v1::PredictRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::RpcMethod rpcmethod_Predict_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Performs prediction on the data in the request.
    //
    // **** REMOVE FROM GENERATED DOCUMENTATION
    virtual ::grpc::Status Predict(::grpc::ServerContext* context, const ::google::cloud::ml::v1::PredictRequest* request, ::google::api::HttpBody* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Predict : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Predict() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Predict() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Predict(::grpc::ServerContext* context, const ::google::cloud::ml::v1::PredictRequest* request, ::google::api::HttpBody* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPredict(::grpc::ServerContext* context, ::google::cloud::ml::v1::PredictRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::api::HttpBody>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Predict<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Predict : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Predict() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Predict() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Predict(::grpc::ServerContext* context, const ::google::cloud::ml::v1::PredictRequest* request, ::google::api::HttpBody* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Predict : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Predict() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::ml::v1::PredictRequest, ::google::api::HttpBody>(std::bind(&WithStreamedUnaryMethod_Predict<BaseClass>::StreamedPredict, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Predict() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Predict(::grpc::ServerContext* context, const ::google::cloud::ml::v1::PredictRequest* request, ::google::api::HttpBody* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPredict(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::ml::v1::PredictRequest,::google::api::HttpBody>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Predict<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Predict<Service > StreamedService;
};

}  // namespace v1
}  // namespace ml
}  // namespace cloud
}  // namespace google


#endif  // GRPC_google_2fcloud_2fml_2fv1_2fprediction_5fservice_2eproto__INCLUDED
