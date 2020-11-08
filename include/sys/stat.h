/* MMURTL system call header file */
#ifndef _STAT_H
#define _STAT_H

#define 	_IFMT   0170000 /* type of file */
#define         _IFDIR  0040000 /* directory */
#define         _IFCHR  0020000 /* character special */
#define         _IFBLK  0060000 /* block special */
#define         _IFREG  0100000 /* regular */
#define         _IFLNK  0120000 /* symbolic link */
#define         _IFSOCK 0140000 /* socket */
#define         _IFIFO  0010000 /* fifo */

#define         S_BLKSIZE  1024 /* size of a block */

#define S_ISUID         0004000 /* set user id on execution */
#define S_ISGID         0002000 /* set group id on execution */
#define S_ISVTX         0001000 /* save swapped text even after use */
#define S_IREAD         0000400 /* read permission, owner */
#define S_IWRITE        0000200 /* write permission, owner */
#define S_IEXEC         0000100 /* execute/search permission, owner */
#define S_ENFMT         0002000 /* enforcement-mode locking */

#define S_IFMT          _IFMT
#define S_IFDIR         _IFDIR
#define S_IFCHR         _IFCHR
#define S_IFBLK         _IFBLK
#define S_IFREG         _IFREG
#define S_IFLNK         _IFLNK
#define S_IFSOCK        _IFSOCK
#define S_IFIFO         _IFIFO

struct  stat
{
  dev_t         st_dev;
  ino_t         st_ino;
  mode_t        st_mode;
  nlink_t       st_nlink;
  uid_t         st_uid;
  gid_t         st_gid;
  dev_t         st_rdev;
  off_t         st_size;
  time_t        st_atime;
  long          st_spare1;
  time_t        st_mtime;
  long          st_spare2;
  time_t        st_ctime;
  long          st_spare3;
  blksize_t     st_blksize;
  blkcnt_t      st_blocks;
  long  st_spare4[2];
};

#endif
