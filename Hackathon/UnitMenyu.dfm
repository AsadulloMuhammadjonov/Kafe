object FormMenyu: TFormMenyu
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormMenyu'
  ClientHeight = 624
  ClientWidth = 996
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -24
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 29
  object DBGrid1: TDBGrid
    Left = 0
    Top = 178
    Width = 996
    Height = 446
    Align = alBottom
    DataSource = DataModule2.DataSourceTovarlar
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -24
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = [fsBold]
    Columns = <
      item
        Expanded = False
        FieldName = 'id'
        Visible = False
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Nomi'
        Title.Alignment = taCenter
        Width = 342
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Narxi'
        Title.Alignment = taCenter
        Width = 333
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Kategoriya'
        Title.Alignment = taCenter
        Width = 299
        Visible = True
      end>
  end
  object Button1: TButton
    Left = 161
    Top = 16
    Width = 209
    Height = 65
    Caption = 'Qo'#39'shish'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 689
    Top = 16
    Width = 209
    Height = 65
    Caption = 'O'#39'zgartirish'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 425
    Top = 16
    Width = 209
    Height = 65
    Caption = 'O'#39'chirish'
    TabOrder = 3
    OnClick = Button3Click
  end
end
