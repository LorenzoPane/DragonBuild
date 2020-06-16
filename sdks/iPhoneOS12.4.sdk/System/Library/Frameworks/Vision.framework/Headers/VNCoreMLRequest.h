//
//  VNCoreMLRequest.h
//  Vision
//
//  Copyright © 2017 Apple Inc. All rights reserved.
//

#import <CoreML/CoreML.h>

#import <Vision/VNRequest.h>
#import <Vision/VNTypes.h>


NS_ASSUME_NONNULL_BEGIN


/*!
	@brief The VNCoreMLModel uses an CoreML based model and prepares it for use with VNCoreMLRequests.
 */

API_AVAILABLE(macos(10.13), ios(11.0), tvos(11.0))
@interface VNCoreMLModel : NSObject

- (instancetype) init  NS_UNAVAILABLE;

/*!
	@brief Create a model container to be used with VNCoreMLRequest based on a Core ML model. This can fail if the model is not supported. Examples for a model that is not supported is a model that does not take an image as any of its inputs.
 
	@param model	The MLModel from CoreML to be used.
	
	@param	error	Returns the error code and description, if the model is not supported.
 */

+ (nullable instancetype) modelForMLModel:(MLModel*)model error:(NSError**)error;

@end

/*!
	@brief   The VNCoreMLRequest uses a VNCoreMLModel, that is based on a CoreML MLModel object, to run predictions with that model. Depending on the model the returned
             observation is either a VNClassificationObservation for classifier models, VNPixelBufferObservations for image-to-image models or VNMLFeatureValueObservation for everything else.
 */

API_AVAILABLE(macos(10.13), ios(11.0), tvos(11.0))
@interface VNCoreMLRequest : VNImageBasedRequest

/*!
 @brief The model from CoreML wrapped in a VNCoreMLModel.
 */
@property (readonly, nonatomic, nonnull) VNCoreMLModel *model;

@property (nonatomic)VNImageCropAndScaleOption imageCropAndScaleOption;


/*!
	@brief Create a new request with a model.
 
	@param model		The VNCoreMLModel to be used.
 */
- (instancetype) initWithModel:(VNCoreMLModel *)model;

/*!
	@brief Create a new request with a model.
 
	@param model		The VNCoreMLModel to be used.
	
	@param	completionHandler	The block that is invoked when the request has been performed.
 */
- (instancetype) initWithModel:(VNCoreMLModel *)model completionHandler:(nullable VNRequestCompletionHandler)completionHandler NS_DESIGNATED_INITIALIZER;


- (instancetype) init  NS_UNAVAILABLE;
- (instancetype) initWithCompletionHandler:(nullable VNRequestCompletionHandler)completionHandler NS_UNAVAILABLE;


@end


API_AVAILABLE(macos(10.14), ios(12.0), tvos(12.0))
static const NSUInteger VNCoreMLRequestRevision1 = 1;


NS_ASSUME_NONNULL_END
