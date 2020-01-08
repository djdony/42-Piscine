#!/bin/sh
ifconfig | grep ether | awk '/ether /{print $2}'
