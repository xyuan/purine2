// Copyright Lin Min 2015
#include "composite/connectable.hpp"
#include "composite/layer.hpp"
#include "composite/vectorize.hpp"
#include "composite/graph/concat.hpp"
#include "composite/graph/copy.hpp"
#include "composite/graph/data_parallel.hpp"
#include "composite/graph/fetch_image.hpp"
#include "composite/graph/split.hpp"
#include "composite/graph/update.hpp"
#include "composite/layers/activation_layer.hpp"
#include "composite/layers/concat_layer.hpp"
#include "composite/layers/conv_layer.hpp"
#include "composite/layers/dropout_layer.hpp"
#include "composite/layers/global_average_layer.hpp"
#include "composite/layers/inception.hpp"
#include "composite/layers/inner_prod_layer.hpp"
#include "composite/layers/lrn_layer.hpp"
#include "composite/layers/pool_layer.hpp"
#include "composite/layers/softmax_layer.hpp"
#include "composite/layers/softmaxloss_layer.hpp"
#include "composite/layers/split_layer.hpp"
#include "composite/layers/nin_layer.hpp"
#include "composite/graph/acc.hpp"
