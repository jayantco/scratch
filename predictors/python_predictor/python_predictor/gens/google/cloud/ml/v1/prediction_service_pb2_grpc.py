# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

from google.api import httpbody_pb2 as google_dot_api_dot_httpbody__pb2
from google.cloud.ml.v1 import prediction_service_pb2 as google_dot_cloud_dot_ml_dot_v1_dot_prediction__service__pb2


class OnlinePredictionServiceStub(object):
  """Copyright 2017 Google Inc. All Rights Reserved.

  Proto file for the Google Cloud Machine Learning Engine.
  Describes the online prediction service.

  The Prediction API, which serves predictions for models managed by
  ModelService.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.Predict = channel.unary_unary(
        '/google.cloud.ml.v1.OnlinePredictionService/Predict',
        request_serializer=google_dot_cloud_dot_ml_dot_v1_dot_prediction__service__pb2.PredictRequest.SerializeToString,
        response_deserializer=google_dot_api_dot_httpbody__pb2.HttpBody.FromString,
        )


class OnlinePredictionServiceServicer(object):
  """Copyright 2017 Google Inc. All Rights Reserved.

  Proto file for the Google Cloud Machine Learning Engine.
  Describes the online prediction service.

  The Prediction API, which serves predictions for models managed by
  ModelService.
  """

  def Predict(self, request, context):
    """Performs prediction on the data in the request.

    **** REMOVE FROM GENERATED DOCUMENTATION
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_OnlinePredictionServiceServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'Predict': grpc.unary_unary_rpc_method_handler(
          servicer.Predict,
          request_deserializer=google_dot_cloud_dot_ml_dot_v1_dot_prediction__service__pb2.PredictRequest.FromString,
          response_serializer=google_dot_api_dot_httpbody__pb2.HttpBody.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'google.cloud.ml.v1.OnlinePredictionService', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))