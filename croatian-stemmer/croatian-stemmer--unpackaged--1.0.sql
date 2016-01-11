/* contrib/croatian-stemmer/croatian-stemmer--unpackaged--1.0.sql */

-- complain if script is sourced in psql, rather than via CREATE EXTENSION

\echo Use "CREATE EXTENSION croatian-stemmer FROM unpackaged" to load this file. \quit

ALTER EXTENSION croatian-stemmer ADD function croatian_lemma;
