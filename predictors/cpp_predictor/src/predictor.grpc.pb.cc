// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: predictor.proto

#include "predictor.pb.h"
#include "predictor.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace carml {
namespace org {
namespace predictor {

static const char* Predict_method_names[] = {
  "/carml.org.predictor.Predict/Open",
  "/carml.org.predictor.Predict/Close",
  "/carml.org.predictor.Predict/URLs",
  "/carml.org.predictor.Predict/URLsStream",
  "/carml.org.predictor.Predict/Images",
  "/carml.org.predictor.Predict/ImagesStream",
  "/carml.org.predictor.Predict/Dataset",
  "/carml.org.predictor.Predict/DatasetStream",
  "/carml.org.predictor.Predict/Reset",
};

std::unique_ptr< Predict::Stub> Predict::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< Predict::Stub> stub(new Predict::Stub(channel));
  return stub;
}

Predict::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Open_(Predict_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Close_(Predict_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_URLs_(Predict_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_URLsStream_(Predict_method_names[3], ::grpc::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Images_(Predict_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ImagesStream_(Predict_method_names[5], ::grpc::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Dataset_(Predict_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DatasetStream_(Predict_method_names[7], ::grpc::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Reset_(Predict_method_names[8], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Predict::Stub::Open(::grpc::ClientContext* context, const ::carml::org::predictor::PredictorOpenRequest& request, ::carml::org::predictor::Predictor* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Open_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::carml::org::predictor::Predictor>* Predict::Stub::AsyncOpenRaw(::grpc::ClientContext* context, const ::carml::org::predictor::PredictorOpenRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::carml::org::predictor::Predictor>::Create(channel_.get(), cq, rpcmethod_Open_, context, request);
}

::grpc::Status Predict::Stub::Close(::grpc::ClientContext* context, const ::carml::org::predictor::Predictor& request, ::carml::org::predictor::PredictorCloseResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Close_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::carml::org::predictor::PredictorCloseResponse>* Predict::Stub::AsyncCloseRaw(::grpc::ClientContext* context, const ::carml::org::predictor::Predictor& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::carml::org::predictor::PredictorCloseResponse>::Create(channel_.get(), cq, rpcmethod_Close_, context, request);
}

::grpc::Status Predict::Stub::URLs(::grpc::ClientContext* context, const ::carml::org::predictor::URLsRequest& request, ::carml::org::predictor::FeaturesResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_URLs_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::carml::org::predictor::FeaturesResponse>* Predict::Stub::AsyncURLsRaw(::grpc::ClientContext* context, const ::carml::org::predictor::URLsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::carml::org::predictor::FeaturesResponse>::Create(channel_.get(), cq, rpcmethod_URLs_, context, request);
}

::grpc::ClientReader< ::carml::org::predictor::FeatureResponse>* Predict::Stub::URLsStreamRaw(::grpc::ClientContext* context, const ::carml::org::predictor::URLsRequest& request) {
  return new ::grpc::ClientReader< ::carml::org::predictor::FeatureResponse>(channel_.get(), rpcmethod_URLsStream_, context, request);
}

::grpc::ClientAsyncReader< ::carml::org::predictor::FeatureResponse>* Predict::Stub::AsyncURLsStreamRaw(::grpc::ClientContext* context, const ::carml::org::predictor::URLsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::ClientAsyncReader< ::carml::org::predictor::FeatureResponse>::Create(channel_.get(), cq, rpcmethod_URLsStream_, context, request, tag);
}

::grpc::Status Predict::Stub::Images(::grpc::ClientContext* context, const ::carml::org::predictor::ImagesRequest& request, ::carml::org::predictor::FeaturesResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Images_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::carml::org::predictor::FeaturesResponse>* Predict::Stub::AsyncImagesRaw(::grpc::ClientContext* context, const ::carml::org::predictor::ImagesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::carml::org::predictor::FeaturesResponse>::Create(channel_.get(), cq, rpcmethod_Images_, context, request);
}

::grpc::ClientReader< ::carml::org::predictor::FeatureResponse>* Predict::Stub::ImagesStreamRaw(::grpc::ClientContext* context, const ::carml::org::predictor::ImagesRequest& request) {
  return new ::grpc::ClientReader< ::carml::org::predictor::FeatureResponse>(channel_.get(), rpcmethod_ImagesStream_, context, request);
}

::grpc::ClientAsyncReader< ::carml::org::predictor::FeatureResponse>* Predict::Stub::AsyncImagesStreamRaw(::grpc::ClientContext* context, const ::carml::org::predictor::ImagesRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::ClientAsyncReader< ::carml::org::predictor::FeatureResponse>::Create(channel_.get(), cq, rpcmethod_ImagesStream_, context, request, tag);
}

::grpc::Status Predict::Stub::Dataset(::grpc::ClientContext* context, const ::carml::org::predictor::DatasetRequest& request, ::carml::org::predictor::FeaturesResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Dataset_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::carml::org::predictor::FeaturesResponse>* Predict::Stub::AsyncDatasetRaw(::grpc::ClientContext* context, const ::carml::org::predictor::DatasetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::carml::org::predictor::FeaturesResponse>::Create(channel_.get(), cq, rpcmethod_Dataset_, context, request);
}

::grpc::ClientReader< ::carml::org::predictor::FeatureResponse>* Predict::Stub::DatasetStreamRaw(::grpc::ClientContext* context, const ::carml::org::predictor::DatasetRequest& request) {
  return new ::grpc::ClientReader< ::carml::org::predictor::FeatureResponse>(channel_.get(), rpcmethod_DatasetStream_, context, request);
}

::grpc::ClientAsyncReader< ::carml::org::predictor::FeatureResponse>* Predict::Stub::AsyncDatasetStreamRaw(::grpc::ClientContext* context, const ::carml::org::predictor::DatasetRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::ClientAsyncReader< ::carml::org::predictor::FeatureResponse>::Create(channel_.get(), cq, rpcmethod_DatasetStream_, context, request, tag);
}

::grpc::Status Predict::Stub::Reset(::grpc::ClientContext* context, const ::carml::org::predictor::ResetRequest& request, ::carml::org::predictor::ResetResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Reset_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::carml::org::predictor::ResetResponse>* Predict::Stub::AsyncResetRaw(::grpc::ClientContext* context, const ::carml::org::predictor::ResetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::carml::org::predictor::ResetResponse>::Create(channel_.get(), cq, rpcmethod_Reset_, context, request);
}

Predict::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      Predict_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Predict::Service, ::carml::org::predictor::PredictorOpenRequest, ::carml::org::predictor::Predictor>(
          std::mem_fn(&Predict::Service::Open), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Predict_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Predict::Service, ::carml::org::predictor::Predictor, ::carml::org::predictor::PredictorCloseResponse>(
          std::mem_fn(&Predict::Service::Close), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Predict_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Predict::Service, ::carml::org::predictor::URLsRequest, ::carml::org::predictor::FeaturesResponse>(
          std::mem_fn(&Predict::Service::URLs), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Predict_method_names[3],
      ::grpc::RpcMethod::SERVER_STREAMING,
      new ::grpc::ServerStreamingHandler< Predict::Service, ::carml::org::predictor::URLsRequest, ::carml::org::predictor::FeatureResponse>(
          std::mem_fn(&Predict::Service::URLsStream), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Predict_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Predict::Service, ::carml::org::predictor::ImagesRequest, ::carml::org::predictor::FeaturesResponse>(
          std::mem_fn(&Predict::Service::Images), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Predict_method_names[5],
      ::grpc::RpcMethod::SERVER_STREAMING,
      new ::grpc::ServerStreamingHandler< Predict::Service, ::carml::org::predictor::ImagesRequest, ::carml::org::predictor::FeatureResponse>(
          std::mem_fn(&Predict::Service::ImagesStream), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Predict_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Predict::Service, ::carml::org::predictor::DatasetRequest, ::carml::org::predictor::FeaturesResponse>(
          std::mem_fn(&Predict::Service::Dataset), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Predict_method_names[7],
      ::grpc::RpcMethod::SERVER_STREAMING,
      new ::grpc::ServerStreamingHandler< Predict::Service, ::carml::org::predictor::DatasetRequest, ::carml::org::predictor::FeatureResponse>(
          std::mem_fn(&Predict::Service::DatasetStream), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Predict_method_names[8],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Predict::Service, ::carml::org::predictor::ResetRequest, ::carml::org::predictor::ResetResponse>(
          std::mem_fn(&Predict::Service::Reset), this)));
}

Predict::Service::~Service() {
}

::grpc::Status Predict::Service::Open(::grpc::ServerContext* context, const ::carml::org::predictor::PredictorOpenRequest* request, ::carml::org::predictor::Predictor* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Predict::Service::Close(::grpc::ServerContext* context, const ::carml::org::predictor::Predictor* request, ::carml::org::predictor::PredictorCloseResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Predict::Service::URLs(::grpc::ServerContext* context, const ::carml::org::predictor::URLsRequest* request, ::carml::org::predictor::FeaturesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Predict::Service::URLsStream(::grpc::ServerContext* context, const ::carml::org::predictor::URLsRequest* request, ::grpc::ServerWriter< ::carml::org::predictor::FeatureResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Predict::Service::Images(::grpc::ServerContext* context, const ::carml::org::predictor::ImagesRequest* request, ::carml::org::predictor::FeaturesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Predict::Service::ImagesStream(::grpc::ServerContext* context, const ::carml::org::predictor::ImagesRequest* request, ::grpc::ServerWriter< ::carml::org::predictor::FeatureResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Predict::Service::Dataset(::grpc::ServerContext* context, const ::carml::org::predictor::DatasetRequest* request, ::carml::org::predictor::FeaturesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Predict::Service::DatasetStream(::grpc::ServerContext* context, const ::carml::org::predictor::DatasetRequest* request, ::grpc::ServerWriter< ::carml::org::predictor::FeatureResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Predict::Service::Reset(::grpc::ServerContext* context, const ::carml::org::predictor::ResetRequest* request, ::carml::org::predictor::ResetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace carml
}  // namespace org
}  // namespace predictor

