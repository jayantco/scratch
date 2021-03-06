// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/storagetransfer/v1/transfer.proto

#include "google/storagetransfer/v1/transfer.pb.h"
#include "google/storagetransfer/v1/transfer.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace storagetransfer {
namespace v1 {

static const char* StorageTransferService_method_names[] = {
  "/google.storagetransfer.v1.StorageTransferService/GetGoogleServiceAccount",
  "/google.storagetransfer.v1.StorageTransferService/CreateTransferJob",
  "/google.storagetransfer.v1.StorageTransferService/UpdateTransferJob",
  "/google.storagetransfer.v1.StorageTransferService/GetTransferJob",
  "/google.storagetransfer.v1.StorageTransferService/ListTransferJobs",
  "/google.storagetransfer.v1.StorageTransferService/PauseTransferOperation",
  "/google.storagetransfer.v1.StorageTransferService/ResumeTransferOperation",
};

std::unique_ptr< StorageTransferService::Stub> StorageTransferService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< StorageTransferService::Stub> stub(new StorageTransferService::Stub(channel));
  return stub;
}

StorageTransferService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetGoogleServiceAccount_(StorageTransferService_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateTransferJob_(StorageTransferService_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateTransferJob_(StorageTransferService_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetTransferJob_(StorageTransferService_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListTransferJobs_(StorageTransferService_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PauseTransferOperation_(StorageTransferService_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ResumeTransferOperation_(StorageTransferService_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status StorageTransferService::Stub::GetGoogleServiceAccount(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest& request, ::google::storagetransfer::v1::GoogleServiceAccount* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetGoogleServiceAccount_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::GoogleServiceAccount>* StorageTransferService::Stub::AsyncGetGoogleServiceAccountRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::GoogleServiceAccount>::Create(channel_.get(), cq, rpcmethod_GetGoogleServiceAccount_, context, request);
}

::grpc::Status StorageTransferService::Stub::CreateTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest& request, ::google::storagetransfer::v1::TransferJob* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateTransferJob_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>* StorageTransferService::Stub::AsyncCreateTransferJobRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>::Create(channel_.get(), cq, rpcmethod_CreateTransferJob_, context, request);
}

::grpc::Status StorageTransferService::Stub::UpdateTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest& request, ::google::storagetransfer::v1::TransferJob* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateTransferJob_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>* StorageTransferService::Stub::AsyncUpdateTransferJobRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>::Create(channel_.get(), cq, rpcmethod_UpdateTransferJob_, context, request);
}

::grpc::Status StorageTransferService::Stub::GetTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest& request, ::google::storagetransfer::v1::TransferJob* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetTransferJob_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>* StorageTransferService::Stub::AsyncGetTransferJobRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>::Create(channel_.get(), cq, rpcmethod_GetTransferJob_, context, request);
}

::grpc::Status StorageTransferService::Stub::ListTransferJobs(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest& request, ::google::storagetransfer::v1::ListTransferJobsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListTransferJobs_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::ListTransferJobsResponse>* StorageTransferService::Stub::AsyncListTransferJobsRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::ListTransferJobsResponse>::Create(channel_.get(), cq, rpcmethod_ListTransferJobs_, context, request);
}

::grpc::Status StorageTransferService::Stub::PauseTransferOperation(::grpc::ClientContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_PauseTransferOperation_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* StorageTransferService::Stub::AsyncPauseTransferOperationRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_PauseTransferOperation_, context, request);
}

::grpc::Status StorageTransferService::Stub::ResumeTransferOperation(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ResumeTransferOperation_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* StorageTransferService::Stub::AsyncResumeTransferOperationRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_ResumeTransferOperation_, context, request);
}

StorageTransferService::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      StorageTransferService_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StorageTransferService::Service, ::google::storagetransfer::v1::GetGoogleServiceAccountRequest, ::google::storagetransfer::v1::GoogleServiceAccount>(
          std::mem_fn(&StorageTransferService::Service::GetGoogleServiceAccount), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StorageTransferService_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StorageTransferService::Service, ::google::storagetransfer::v1::CreateTransferJobRequest, ::google::storagetransfer::v1::TransferJob>(
          std::mem_fn(&StorageTransferService::Service::CreateTransferJob), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StorageTransferService_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StorageTransferService::Service, ::google::storagetransfer::v1::UpdateTransferJobRequest, ::google::storagetransfer::v1::TransferJob>(
          std::mem_fn(&StorageTransferService::Service::UpdateTransferJob), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StorageTransferService_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StorageTransferService::Service, ::google::storagetransfer::v1::GetTransferJobRequest, ::google::storagetransfer::v1::TransferJob>(
          std::mem_fn(&StorageTransferService::Service::GetTransferJob), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StorageTransferService_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StorageTransferService::Service, ::google::storagetransfer::v1::ListTransferJobsRequest, ::google::storagetransfer::v1::ListTransferJobsResponse>(
          std::mem_fn(&StorageTransferService::Service::ListTransferJobs), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StorageTransferService_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StorageTransferService::Service, ::google::storagetransfer::v1::PauseTransferOperationRequest, ::google::protobuf::Empty>(
          std::mem_fn(&StorageTransferService::Service::PauseTransferOperation), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      StorageTransferService_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< StorageTransferService::Service, ::google::storagetransfer::v1::ResumeTransferOperationRequest, ::google::protobuf::Empty>(
          std::mem_fn(&StorageTransferService::Service::ResumeTransferOperation), this)));
}

StorageTransferService::Service::~Service() {
}

::grpc::Status StorageTransferService::Service::GetGoogleServiceAccount(::grpc::ServerContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest* request, ::google::storagetransfer::v1::GoogleServiceAccount* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StorageTransferService::Service::CreateTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StorageTransferService::Service::UpdateTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StorageTransferService::Service::GetTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StorageTransferService::Service::ListTransferJobs(::grpc::ServerContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest* request, ::google::storagetransfer::v1::ListTransferJobsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StorageTransferService::Service::PauseTransferOperation(::grpc::ServerContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status StorageTransferService::Service::ResumeTransferOperation(::grpc::ServerContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace storagetransfer
}  // namespace v1

