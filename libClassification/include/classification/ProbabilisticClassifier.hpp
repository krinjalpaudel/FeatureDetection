/*
 * ProbabilisticClassifier.hpp
 *
 *  Created on: 15.02.2013
 *      Author: Patrik Huber
 */

#pragma once

#ifndef PROBABILISTICCLASSIFIER_H_
#define PROBABILISTICCLASSIFIER_H_

#include "opencv2/core/core.hpp"

using cv::Mat;

namespace classification {


/**
 * Classifier that determines the probability of a feature vector being of a certain class.
 */
class ProbabilisticClassifier {
public:

	virtual ~ProbabilisticClassifier() {}

	/**
	 * Classifies a feature vector.
	 *
	 * @param[in] featureVector The feature vector.
	 * @return A probability between 0 and 1 for being in the positive class.
	 */
	virtual float classify(const Mat& featureVector) const = 0;
};

} /* namespace classification */
#endif /* PROBABILISTICCLASSIFIER_H_ */