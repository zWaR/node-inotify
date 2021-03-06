// Copyright 2010, Camilo Aguilar. Cloudescape, LLC.
#ifndef SRC_NODE_INOTIFY_H_
#define SRC_NODE_INOTIFY_H_

#include <node.h>
#include <node_version.h>
#include <node_object_wrap.h>
#include <sys/inotify.h>
#include <sys/select.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "nan.h"
#define NODE_INOTIFY_VERSION "1.4.0"

using namespace v8;
using namespace node;

namespace NodeInotify {

}

#endif  // SRC_NODE_INOTIFY_H_

