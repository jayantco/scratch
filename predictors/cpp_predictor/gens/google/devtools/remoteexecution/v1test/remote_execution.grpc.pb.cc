// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/devtools/remoteexecution/v1test/remote_execution.proto

#include "google/devtools/remoteexecution/v1test/remote_execution.pb.h"
#include "google/devtools/remoteexecution/v1test/remote_execution.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace devtools {
namespace remoteexecution {
namespace v1test {

static const char* Execution_method_names[] = {
  "/google.devtools.remoteexecution.v1test.Execution/Execute",
};

std::unique_ptr< Execution::Stub> Execution::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< Execution::Stub> stub(new Execution::Stub(channel));
  return stub;
}

Execution::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Execute_(Execution_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Execution::Stub::Execute(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::ExecuteRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Execute_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Execution::Stub::AsyncExecuteRaw(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::ExecuteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_Execute_, context, request);
}

Execution::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      Execution_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Execution::Service, ::google::devtools::remoteexecution::v1test::ExecuteRequest, ::google::longrunning::Operation>(
          std::mem_fn(&Execution::Service::Execute), this)));
}

Execution::Service::~Service() {
}

::grpc::Status Execution::Service::Execute(::grpc::ServerContext* context, const ::google::devtools::remoteexecution::v1test::ExecuteRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* ActionCache_method_names[] = {
  "/google.devtools.remoteexecution.v1test.ActionCache/GetActionResult",
  "/google.devtools.remoteexecution.v1test.ActionCache/UpdateActionResult",
};

std::unique_ptr< ActionCache::Stub> ActionCache::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< ActionCache::Stub> stub(new ActionCache::Stub(channel));
  return stub;
}

ActionCache::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetActionResult_(ActionCache_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateActionResult_(ActionCache_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ActionCache::Stub::GetActionResult(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::GetActionResultRequest& request, ::google::devtools::remoteexecution::v1test::ActionResult* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetActionResult_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::remoteexecution::v1test::ActionResult>* ActionCache::Stub::AsyncGetActionResultRaw(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::GetActionResultRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteexecution::v1test::ActionResult>::Create(channel_.get(), cq, rpcmethod_GetActionResult_, context, request);
}

::grpc::Status ActionCache::Stub::UpdateActionResult(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::UpdateActionResultRequest& request, ::google::devtools::remoteexecution::v1test::ActionResult* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateActionResult_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::remoteexecution::v1test::ActionResult>* ActionCache::Stub::AsyncUpdateActionResultRaw(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::UpdateActionResultRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteexecution::v1test::ActionResult>::Create(channel_.get(), cq, rpcmethod_UpdateActionResult_, context, request);
}

ActionCache::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      ActionCache_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ActionCache::Service, ::google::devtools::remoteexecution::v1test::GetActionResultRequest, ::google::devtools::remoteexecution::v1test::ActionResult>(
          std::mem_fn(&ActionCache::Service::GetActionResult), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ActionCache_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ActionCache::Service, ::google::devtools::remoteexecution::v1test::UpdateActionResultRequest, ::google::devtools::remoteexecution::v1test::ActionResult>(
          std::mem_fn(&ActionCache::Service::UpdateActionResult), this)));
}

ActionCache::Service::~Service() {
}

::grpc::Status ActionCache::Service::GetActionResult(::grpc::ServerContext* context, const ::google::devtools::remoteexecution::v1test::GetActionResultRequest* request, ::google::devtools::remoteexecution::v1test::ActionResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ActionCache::Service::UpdateActionResult(::grpc::ServerContext* context, const ::google::devtools::remoteexecution::v1test::UpdateActionResultRequest* request, ::google::devtools::remoteexecution::v1test::ActionResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* ContentAddressableStorage_method_names[] = {
  "/google.devtools.remoteexecution.v1test.ContentAddressableStorage/FindMissingBlobs",
  "/google.devtools.remoteexecution.v1test.ContentAddressableStorage/BatchUpdateBlobs",
  "/google.devtools.remoteexecution.v1test.ContentAddressableStorage/GetTree",
};

std::unique_ptr< ContentAddressableStorage::Stub> ContentAddressableStorage::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< ContentAddressableStorage::Stub> stub(new ContentAddressableStorage::Stub(channel));
  return stub;
}

ContentAddressableStorage::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_FindMissingBlobs_(ContentAddressableStorage_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BatchUpdateBlobs_(ContentAddressableStorage_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetTree_(ContentAddressableStorage_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ContentAddressableStorage::Stub::FindMissingBlobs(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::FindMissingBlobsRequest& request, ::google::devtools::remoteexecution::v1test::FindMissingBlobsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_FindMissingBlobs_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::remoteexecution::v1test::FindMissingBlobsResponse>* ContentAddressableStorage::Stub::AsyncFindMissingBlobsRaw(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::FindMissingBlobsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteexecution::v1test::FindMissingBlobsResponse>::Create(channel_.get(), cq, rpcmethod_FindMissingBlobs_, context, request);
}

::grpc::Status ContentAddressableStorage::Stub::BatchUpdateBlobs(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::BatchUpdateBlobsRequest& request, ::google::devtools::remoteexecution::v1test::BatchUpdateBlobsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_BatchUpdateBlobs_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::remoteexecution::v1test::BatchUpdateBlobsResponse>* ContentAddressableStorage::Stub::AsyncBatchUpdateBlobsRaw(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::BatchUpdateBlobsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteexecution::v1test::BatchUpdateBlobsResponse>::Create(channel_.get(), cq, rpcmethod_BatchUpdateBlobs_, context, request);
}

::grpc::Status ContentAddressableStorage::Stub::GetTree(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::GetTreeRequest& request, ::google::devtools::remoteexecution::v1test::GetTreeResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetTree_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::remoteexecution::v1test::GetTreeResponse>* ContentAddressableStorage::Stub::AsyncGetTreeRaw(::grpc::ClientContext* context, const ::google::devtools::remoteexecution::v1test::GetTreeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::remoteexecution::v1test::GetTreeResponse>::Create(channel_.get(), cq, rpcmethod_GetTree_, context, request);
}

ContentAddressableStorage::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      ContentAddressableStorage_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ContentAddressableStorage::Service, ::google::devtools::remoteexecution::v1test::FindMissingBlobsRequest, ::google::devtools::remoteexecution::v1test::FindMissingBlobsResponse>(
          std::mem_fn(&ContentAddressableStorage::Service::FindMissingBlobs), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ContentAddressableStorage_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ContentAddressableStorage::Service, ::google::devtools::remoteexecution::v1test::BatchUpdateBlobsRequest, ::google::devtools::remoteexecution::v1test::BatchUpdateBlobsResponse>(
          std::mem_fn(&ContentAddressableStorage::Service::BatchUpdateBlobs), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ContentAddressableStorage_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ContentAddressableStorage::Service, ::google::devtools::remoteexecution::v1test::GetTreeRequest, ::google::devtools::remoteexecution::v1test::GetTreeResponse>(
          std::mem_fn(&ContentAddressableStorage::Service::GetTree), this)));
}

ContentAddressableStorage::Service::~Service() {
}

::grpc::Status ContentAddressableStorage::Service::FindMissingBlobs(::grpc::ServerContext* context, const ::google::devtools::remoteexecution::v1test::FindMissingBlobsRequest* request, ::google::devtools::remoteexecution::v1test::FindMissingBlobsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ContentAddressableStorage::Service::BatchUpdateBlobs(::grpc::ServerContext* context, const ::google::devtools::remoteexecution::v1test::BatchUpdateBlobsRequest* request, ::google::devtools::remoteexecution::v1test::BatchUpdateBlobsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ContentAddressableStorage::Service::GetTree(::grpc::ServerContext* context, const ::google::devtools::remoteexecution::v1test::GetTreeRequest* request, ::google::devtools::remoteexecution::v1test::GetTreeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace devtools
}  // namespace remoteexecution
}  // namespace v1test

